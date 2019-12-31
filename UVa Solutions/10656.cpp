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
vector<int>ans;
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c,d,t,i;
    while(cin>>t)
    {
        if(t==0)
            break;
        while(t--)
        {
            cin>>a;
            if(a!=0)
                ans.push_back(a);
        }
      //  cout<<ans.size()<<endl;
        if(ans.size()==0)
            cout<<"0"<<endl;
        else{
            for(i=0; i<ans.size()-1; i++)
                cout<<ans[i]<<" ";
        cout<<ans[ans.size()-1]<<endl;
        }
        ans.clear();
    }
    return 0;
}
