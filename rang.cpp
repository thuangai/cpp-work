#include <iostream>
using namespace std;


int main(){
    int r=4, c=4;
    int a[r][c] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
    };
    for(int i=0;i<r;i++){
        if (i%2==1){
            for(int j=c;j>=0;j++){
                int b= (c*i)+c-j-1;
                a[i][j]=b;
                cout<<b;
            }
        }
    }
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
