#include <iostream>
using namespace std;

void Init()
{
    int rows=3;
    int cols=4;
    int B[rows][cols] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        };
        for (int r = 0; r < 3; r++){
            for (int c = 0; c < 4; c++)
            {
                 cout << B[r][c] << ' ';
            }
        cout << endl;
    }
    int B_trans[cols][rows];
    for(int r=0;r<rows;r++){
            for(int c=0;c<cols;c++){
                B_trans[c][r]=B[r][c];
            }
    }
    for(int c=0;c<cols;c++){
        for (int r=0;r<rows;r++){
            cout<<B_trans[c][r]<<" ";
        }
        cout<<endl;
    }
}
int main (){
    Init();
    return 0;
}
