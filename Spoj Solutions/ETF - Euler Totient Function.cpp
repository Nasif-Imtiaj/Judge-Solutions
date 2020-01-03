#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int phi[1000005],mark[1000005],depth[1000005];
int ans[23][1000005];
void make_phi()
{
    int i,j;
    for(i=1; i<=1000000; i++)
        phi[i]=i;
    mark[1]=1;
    for(i=2; i<=1000000; i++)
    {
        if(!mark[i])
        {
            for(j=i; j<=1000000; j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}
int dep(int a)
{
    if(depth[a]!=0 || a==1)
        return depth[a]+1;
    else
        return dep(phi[a]);

}
int main()
{
//freopen("output.txt", "w", stdout);
    make_phi();
    int a,b,c,d,i,t,j;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<phi[a]<<endl;
    }


    return 0;
}
