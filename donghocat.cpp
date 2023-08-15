#include <iostream>
using namespace std;

void Sum()
{
    int rows=10;
    int cols=10;
    int A[rows][cols];
    for(int r=0;r<rows;r++){
            for(int c=0;c<cols;c++){
                    A[r][c]=1;
            }
    }
     A[2][5]=3,A[2][6]=3,A[2][7]=3;
     A[3][6]=3;
     A[4][5]=3,A[4][6]=3,A[4][7]=3;
     int m=0;
     int m_r,m_c;
     for (int r = 0; r < rows-2; r++){
        for (int c = 0; c < cols-2; c++){
                int a=A[r][c]+A[r][c+1]+A[r][c+2]+A[r+1][c+1]+A[r+2][c]+A[r+2][c+1]+A[r+2][c+1];
                if (a>=m){
                    m=a;
                    m_r=r;
                    m_c=c;

                }

        }
     }
     cout<<A[m_r][m_c]<<A[m_r][m_c+1]<<A[m_r][m_c+2]<<endl;
     cout<<" "<<A[m_r+1][m_c+1]<<endl;
     cout<<A[m_r+2][m_c]<<A[m_r+2][m_c+1]<<A[m_r+2][m_c+2]<<endl;
     cout<<endl;
    for (int r = 0; r < 10; r++){
        for (int c = 0; c < 10; c++)
            {
                 cout << A[r][c] << ' ';
            }
        cout << endl;
        }
}
int main (){
    Sum();

    return 0;
}
