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
int x[200];
vector<pair<char,int> >ans;
bool comp(pair<char,int>&a,pair<char,int>&b)
{
    if(a.second>b.second)
        return 1;
    if(a.second<b.second)
        return 0;
    if(a.first<b.second)
        return 1;
    else
        return 0;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c,i,j;
    string s;
    cin>>a;
    getchar();
    while(a--)
    {
        getline(cin,s);
        for(i=0; i<s.length(); i++)
        {
            b=s[i];
            if(b>90)
                b-=32;
            x[b]++;
        }
    }
    for(i=65; i<=90; i++)
    {
        if(x[i]>0)
        {
            ans.push_back(make_pair(i,x[i]));
        }
    }
    sort(ans.begin(),ans.end(),comp);
    for(i=0; i<ans.size(); i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}
