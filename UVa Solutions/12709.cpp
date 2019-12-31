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
vector<pair<double,int> >ans;
bool cmp(pair<double,int>&l,pair<double,int>&r)
{
    if(l.first>r.first)
        return true;
    if(l.first<r.first)
        return false;
    if(l.second>r.second)
        return true;
    if(l.second<r.second)
        return false;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c,t,d;
    double x,y,z;
    while(cin>>t)
    {
        if(t==0)
            break;
        while(t--)
        {
            cin>>a>>b>>c;
            d=a*b*c;
            x=9.8*(double)c;
            y=9.8/x;
            z=9.8-y;
          //  cout<<z<<endl;
            ans.push_back(make_pair(z,d));
        }
        sort(ans.begin(),ans.end(),cmp);
        cout<<ans[0].second<<endl;
        ans.clear();
    }
    return 0;
}
