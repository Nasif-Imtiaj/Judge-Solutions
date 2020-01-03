#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int banana[250][250],arr[250][250],n;
int find_bananas(int x,int y)
{
    if(y<0 || y==n || x==((2*n)-1) || arr[x][y]==0)
        return 0;
    if(banana[x][y])
        return banana[x][y];
    if(x<n-1)
    {
        banana[x][y]=arr[x][y]+max(find_bananas(x+1,y+1),find_bananas(x+1,y));
    }
    else
    {
        banana[x][y]=arr[x][y]+max(find_bananas(x+1,y-1),find_bananas(x+1,y));
    }
    return banana[x][y];
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int k;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
                scanf("%d",&arr[i][j]);
        }
        k=n;
        for(int i=n-2; i>=0; i--)
        {
            for(int j=0; j<=i; j++)
                scanf("%d",&arr[k][j]);
                k++;
        }
        int x=find_bananas(0,0);
        printf("Case %d: %d\n",cs++,banana[0][0]);
        for(int i=0; i<=200; i++)
            for(int j=0; j<=200; j++){
                banana[i][j]=0;
                arr[i][j]=0;
            }
    }
    return 0;
}
