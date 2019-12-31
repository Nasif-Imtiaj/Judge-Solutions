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
int main()
{
    // freopen("output.txt", "w", stdout);
    int a,b,c,i,len,j,k,same=0,found=0;
    string s,ans,blank;
    cin>>a;
    getchar();
    while(a--)
    {
        getchar();
        getline(cin,s);
        for(i=0; i<s.length()/2; i++)
        {
            ans+=s[i];
            for(j=0,k=0; j<s.length(); j++)
            {
                if(s[j]==ans[k])
                {
                    same++;
                }
                else
                {
                    same=0;
                    break;
                }
                k++;
                if(k==ans.length())
                    k=0;
            }
            if(same==s.length() && s.length()%ans.length()==0)
            {
                found=1;
                break;
            }
        }
        if(found==1)
            co(ans.length())
            else
                co(s.length())
                if(a>0)
                    cout<<endl;
        ans.clear();
        same=0;
        found=0;
    }
    return 0;
}
