#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
vector<int>heads;
vector<int>knights;
int main()
{
//freopen("output.txt", "w", stdout);
    int a,n,m,b,c,d,i,j,k,ans=0,slained=0;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>c;
            heads.push_back(c);
        }
        for(i=0; i<m; i++)
        {
            cin>>d;
            knights.push_back(d);
        }
        if(m<n)
        {
            co("Loowater is doomed!")
        }
        else
        {
            sort(heads.begin(),heads.end());
            sort(knights.begin(),knights.end());
            for(i=0; i<n; i++)
            {
                for(j=0; j<knights.size(); j++)
                {
                    if(heads[i]<=knights[j])
                    {
                        ans+=knights[j];
                        slained++;
                        knights.erase(knights.begin()+j);
                        break;
                    }
                }
            }
            if(slained==n)
            {
                co(ans)
            }
            else
            {
                co("Loowater is doomed!")
            }
        }
        ans=0;
        heads.clear();
        knights.clear();
        slained=0;
    }








    return 0;
}
