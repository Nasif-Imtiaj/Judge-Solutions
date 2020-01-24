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
    int n,tc=0;
    while(scanf("%d",&n)!=EOF)
    {
        string s;
        vector<string>v;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            v.push_back(s);
        }
        map<string,int>mp;
      for(int i=0;i<n;i++)
        {
            cin>>s;
            int amount,m;
            cin>>amount>>m;
            if(m==0)
                continue;
            int div=amount/m;
            mp[s]-=div*m;
            while(m--)
            {
                cin>>s;
                mp[s]+=div;
            }
        }
        if(tc)
            printf("\n");
        for(int i=0; i<n; i++)
            cout<<v[i]<< " "<<mp[v[i]]<<endl;
        tc=1;
    }

    return 0;
}

