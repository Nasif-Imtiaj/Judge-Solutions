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

    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int b=0,mx=0;
        string store[1000],s;
        store[0]="http://www.lightoj.com/";
        printf("Case %d:\n",cs++);
        while(cin>>s)
        {
            if(s=="VISIT")
            {
                cin>>s;
                cout<<s<<endl;
                b++;
                store[b]=s;
                mx=b;

            }
            else if(s=="BACK")
            {
                b--;
                if(b>=0)
                {
                    cout<<store[b]<<endl;

                }
                else
                {
                    cout<<"Ignored"<<endl;
                }
                if(b<0)
                    b=0;
            }
            else if(s=="FORWARD")
            {
                b++;
                if(b<=mx)
                    cout<<store[b]<<endl;
                else
                    cout<<"Ignored"<<endl;
                if(b>mx)
                    b=mx;
            }
            else
                break;

        }
    }






    return 0;
}
