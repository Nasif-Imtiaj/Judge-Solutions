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
vector<string>ans;
int main()
{
//freopen("output.txt", "w", stdout);

    string s,x,store[1005];
    int a,b,c,i,j,z=0,t,high=9999,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        cin>>a;
        getchar();
        for(i=0; i<a; i++)
        {
            cin>>s;
            store[i]=s;
        }
        cin>>s;
        int len=s.length();
        for(i=0; i<a; i++)
        {
            z=0;
            for(j=0; j<len; j++)
            {
                if(s[j]!=store[i][j])
                    z++;
            }
            if(z==1 || z==0)
                ans.push_back(store[i]);
        }
        printf("Case %d:\n",k);
        for(i=0;i<ans.size();i++)
            cout<<ans[i]<<endl;
        ans.clear();
    }
    return 0;
}
