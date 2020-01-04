#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    //freopen("output.txt", "w", stdout);
    ll pre[22];
    pre[0]=1;
    for(int i=1; i<=20; i++)
    {
        pre[i]=pre[i-1]*i;
        // cout<<pre[i]<<" "<<i<<endl;
    }
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>a;
        vector<int>ans;
        int i;
        for(i=20; i>=0; i--)
        {
            if(a>=pre[i])
            {
                a-=pre[i];
                ans.push_back(i);
            }
        }
        printf("Case %d: ",cs++);
        if(a==0)
        {
            int len=ans.size();
            for(i=len-1; i>=0; i--)
            {
                cout<<ans[i]<<"!";
                if(i>0)
                    cout<<"+";
            }
            cout<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }

    }





    return 0;
}

