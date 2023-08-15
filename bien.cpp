#include<iostream>
using namespace std;

int main(){
    int ma=10;
    int a[ma][ma];
    for(int r=0;r<ma;r++){
            for(int c=0;c<ma;c++){
                    a[r][c]=0;
        }
    }
    for(int r=0;r<ma;r++){
        a[r][r]=1;
    }
    for(int r=0;r<ma;r++){
        for(int c=0;c<r;c++){
            a[r][c]=2;
        }
    }
    for(int c=0;c<ma;c++){
        for (int r=0;r<ma;r++){
            cout<<a[c][r]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
