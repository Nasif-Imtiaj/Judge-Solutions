#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int chess[8][8];
int ans=0,sum=0;
void backtrack(int pos,bool board[8][8])
{
    int i,m,n;
    if(pos==8)
    {
        ans=max(ans,sum);
        return;
    }
    for(i=0; i<8; i++)
    {
        if(board[i][pos]==1)
            continue;

        sum+=chess[i][pos];
        for(m=0; m<8; m++)
        {
            board[m][pos]=1;
            board[i][m]=1;
        }
        for(m=i,n=pos; m<8 && n<8; m++,n++)
            board[m][n]=1;
        for(m=i,n=pos; m>=0 && n<8; m--,n++)
            board[m][n]=1;

        backtrack(pos+1,board);
        sum-=chess[i][pos];

        for(m=0; m<8; m++)
        {
            board[m][pos]=0;
            board[i][m]=0;
        }
        for(m=i,n=pos; m<8 && n<8; m++,n++)
            board[m][n]=0;
        for(m=i,n=pos; m>=0 && n<8; m--,n++)
            board[m][n]=0;
    }
    return;
}
int main()
{
//freopen("output.txt", "w", stdout);
    bool board[8][8]={0};
    int i,j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            cin>>chess[i][j];
        }
    }
   /* backtrack(0,board);
    cout<<ans<<endl;

*/
cout<<chess[4][5]<<endl;








    return 0;
}
