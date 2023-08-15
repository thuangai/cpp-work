#include <iostream>
using namespace std;

const int Max=100;
int bc[Max][Max];

void banco(int size){
    for (int i=0;i<size;i++){
            for(int j=0;j<size;j++){

                    bc[i][j]=(i+j)%2;
            }
    }
}
void Show(int size)
{
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            cout << bc[r][c] << ' ';
        }
        cout << endl;
    }
}
int main(){
    int bc=8;
    banco(bc);
    Show(bc);
    return 0;

}
