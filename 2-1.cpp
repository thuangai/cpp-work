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
    int c=rows*cols;
    int B_new[c];
    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            B_new[cols*r+c]=B[r][c];

        }
    }
    for (int i;i<c;i++){
        cout<<B_new[i]<<" ";
    }
}
int main (){
    Init();

    return 0;
}
