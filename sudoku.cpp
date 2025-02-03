#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool check(vector<vector<string>>& board,int h,int v,string value){
    //check horizontal
    for(int i=0;i<9;i++){
        if(board[h][i]==value){
            return false;
        }
    }
    //check verticle
    for(int i=0;i<9;i++){
        if(board[i][v]==value){
            return false;
        }
    }
    //check box
    for(int i=(h/3)*3;i<(h/3)*3+3;i++){
        for(int j=(v/3)*3;j<(v/3)*3+3;j++){
                if(board[i][j]==value){
                    return false;
                }
            }
        }
    return true;
}

bool backtr(vector<vector<string>>& board,int h,int v){
    if(h==9){
        return true;
    }
    if(v==9){
        return backtr(board,h+1,0);
    }
    if(board[h][v]!="."){
        return backtr(board,h,v+1);
    }
    else{
        for(int i=1;i<10;i++){
            if(check(board,h,v,to_string(i))){
                board[h][v]=to_string(i);
                if(backtr(board,h,v+1)){
                    return true;
                }
                board[h][v]=".";
            }
        }
        return false;
    }
}
void input(vector<vector<string>>& board){
    for(int i=0;i<9;i++){
        cout<<i+1<<" row:";
        for(int j=0;j<9;j++){
           cin>>board[i][j];
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<string>>board(9,vector<string>(9,"."));
    input(board);
    for(vector<string> a:board){
        for(string b:a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    backtr(board,0,0);
    cout<<endl;
    for(vector<string> a:board){
        for(string b:a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}







