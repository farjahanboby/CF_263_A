#include <iostream>

using namespace std;

int main()
{
    int i,j,m,row,col;
    int n[i][j];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>n[i][j];
            if(n[i][j]==1)
                 row=i, col=j;
        }
    }
    cout<<abs(2-row)+abs(2-col)<<endl;
    return 0;
}
