#include <iostream>
using namespace std;

int c(int v,int n){
    if (v==0||v==n){
        return 1;
    }
    if (v==1||v==n-1){
        return n;
    }
    return c(v-1,n-1)+c(v,n-1);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for (int j=0;j<=i;j++){
            cout<<c(j,i)<<" ";
        }
        cout<<endl;
    }
}
