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
string save[10];
int val[10];
vector<string>ans;
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c,high=0,i=0,j=1;
    string s;
    cin>>b;
    getchar();
    while(b--)
    {
        i=0;
        c=10;
        while(c--)
        {
            cin>>s>>a;
            save[i]=s;
            val[i]=a;
            high=max(a,high);
            i++;
        }
        for(i=0;i<10;i++){
            if(val[i]==high)
                ans.push_back(save[i]);
        }
        for(i=0;i<ans.size()-1;i++){
            if(ans[i]==ans[i+1]){
                ans.erase(ans.begin()+i+1);
            }
        }
        printf("Case #%d:\n",j);
        for(i=0;i<ans.size();i++)
        co(ans[i]);
        j++;
        ans.clear();
        high=0;
    }


    return 0;
}
