#include <iostream>
#include <stdlib.h>
using namespace std;

void Init()
{
    int C[20];
    for(int i=0;i<20;i++){
        C[i]=rand()%10;
    }

    for(int i=0;i<20;i++){

        cout<<C[i]<<" ";
    }
    cout<<endl;
    int B[4][5];
    for (int i=0;i<20;i++){
            int r=i/5;
            int c=i%5;
            B[r][c]=C[i];
        }

    for(int r=0;r<4;r++){
        for (int c=0;c<5;c++){
            cout<<B[r][c]<<" ";
        }
        cout<<endl;
    }
}
int main (){
    Init();
    return 0;
}
