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
int main()
{
//freopen("output.txt", "w", stdout);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int mark[60][60];
        int over_takes=0;
        int arr[n+5],arr2[n+5];
        for(int i=0; i<55; i++)
        {
            for(int j=0; j<55; j++)
                mark[i][j]=0;
        }
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=1; i<=n; i++)
        {
           scanf("%d",&arr2[i]);
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                mark[arr2[i]][arr2[j]]=1;
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(mark[arr[i]][arr[j]]==0)
                    over_takes++;
            }
        }
        printf("%d\n",over_takes);

    }

    return 0;
}
