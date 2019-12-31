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
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int flg=1;
            for(int j=0;j<m;j++){
                int a;
                scanf("%d",&a);
                if(!a)
                    flg=0;
            }
            if(flg)
                ans++;
        }
        printf("%d\n",ans);

    }

    return 0;
}

