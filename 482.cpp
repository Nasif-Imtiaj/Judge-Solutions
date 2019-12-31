#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int x[1000000];
vector<pair<int,string>>ans;
int main()
{
   // freopen("output.txt", "w", stdout);
    int a,b,c,d,x[100000],i,j,k;
    string s,g,y[10000];
    stringstream ok;
    cin>>a;
    getchar();
    while(a--)
    {
        getline(cin,g);
        getline(cin,s);
        ok.clear();
        ok<<s;
        i=0;
        while(ok>>b)
        {
            x[i]=b;
            i++;
        }
        getline(cin,s);
        ok.clear();
        ok<<s;
        j=0;
        while(ok>>g)
        {
            y[j]=g;
            j++;
        }

        for(k=0; k<j; k++)
        {
            ans.push_back(make_pair(x[k],y[k]));
        }

        sort(ans.begin(),ans.end());

        for(i=0; i<ans.size(); i++)
            cout<<ans[i].second<<endl;

        ans.clear();

        if(a!=0)
            cout<<endl;
    }
    return 0;
}
