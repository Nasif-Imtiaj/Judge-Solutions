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
    int t,cs=1;
    char s[1005];
    scanf("%d",&t);
    while(t--)
    {
        int n,m,ans=0;
        scanf("%d %d",&n,&m);
        scanf("%s",s);
        map<char,int>last_meet;
        for(int i=0; i<n; i++)
        {
            if(last_meet[s[i]]==0)
                last_meet[s[i]]=i+1;
            else{
                int dif=(i+1)-last_meet[s[i]];
                if(dif<=m)
                    ans++;
                last_meet[s[i]]=i+1;
            }

        }
        printf("Case %d: %d\n",cs++,ans);
    }

    return 0;
}
