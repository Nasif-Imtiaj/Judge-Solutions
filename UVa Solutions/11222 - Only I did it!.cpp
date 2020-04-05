#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define bug printf("bug\n");
#define bug2(var) cout<<#var<<" "<<var<<endl;
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool cmp(pair<int,int>&l,pair<int,int>&r)
{
    if(l.first>r.first)
        return 1;
    else if(l.first<r.first)
        return 0;
    else if(l.second<r.second)
        return 1;
    return 0;
}
int main()
{
    FastRead
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    for(int cs=1; cs<=n; cs++)
    {
        map<int,int>one,two,three;
        int d,sz[4];
        vector<int>v[4];
        set<int>ans[4];
        cin>>sz[1];
        for(int i=0; i<sz[1]; i++)
        {
            cin>>d;
            one[d]=1;
            v[1].push_back(d);
        }
        cin>>sz[2];
        for(int i=0; i<sz[2]; i++)
        {
            cin>>d;
            two[d]=1;
            v[2].push_back(d);
        }
        cin>>sz[3];
        for(int i=0; i<sz[3]; i++)
        {
            cin>>d;
            three[d]=1;
            v[3].push_back(d);
        }
        for(int i=0; i<sz[1]; i++)
            if(!two[v[1][i]] && !three[v[1][i]])
                ans[1].insert(v[1][i]);
        for(int i=0; i<sz[2]; i++)
            if(!one[v[2][i]] && !three[v[2][i]])
                ans[2].insert(v[2][i]);
        for(int i=0; i<sz[3]; i++)
            if(!one[v[3][i]] && !two[v[3][i]])
                ans[3].insert(v[3][i]);
        vector<pair<int,int> >res;
        int x=ans[1].size(),y=ans[2].size(),z=ans[3].size();
        res.push_back({x,1});
        res.push_back({y,2});
        res.push_back({z,3});
        sort(res.begin(),res.end(),cmp);
        cout<<"Case #"<<cs<<":"<<endl;
        int player=res[0].second,ps=res[0].first;
        cout<<player<<" "<<ps;
        for(auto X:ans[player])
            cout<<" "<<X;
        cout<<endl;
        for(int i=1; i<3; i++)
        {
            if(res[i].first!=res[i-1].first)
                break;
            player=res[i].second,ps=res[i].first;
            cout<<player<<" "<<ps;
            for(auto X:ans[player])
                cout<<" "<<X;
            cout<<endl;
        }
    }
    return 0;
}

