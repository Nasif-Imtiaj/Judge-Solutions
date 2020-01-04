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
bool cmp(pair<int,int>&l,pair<int,int>&r)
{
    if(l.second>r.second)
        return 1;
    return 0;
}
vector<pair<int,int> >v;
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    while(scanf("%d",&t)!=EOF)
    {
        if(!t)
            break;
        int a,b,ans=0,cur,n,m;
        for(int i=0; i<t; i++)
        {
            scanf("%d %d",&a,&b);
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end(),cmp);
        n=v[0].first;
        m=v[0].second;
        for(int i=1; i<t; i++)
        {
            int x=v[i].first;
            int y=v[i].second;
            n+=x;
            if(x>m)
                m=y;
            else
            {
                m-=x;
                if(y>m)
                    m+=(y-m);
            }
          // cout<<n<<" "<<m<<endl;
        }
        printf("Case %d: %d\n",cs++,n+m);
        v.clear();
    }

    return 0;
}
