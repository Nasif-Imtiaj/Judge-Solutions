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
        int n,bank=0;
         printf("Case %d:\n",cs++);
        cin>>n;
        getchar();
        string s;
        while(n--)
        {
            getline(cin,s);
            stringstream ss;
            ss<<s;
            string temp;
            int a;
            while(ss>>temp)
            {
                if(temp=="donate")
                {
                    ss>>a;
                    bank+=a;
                    break;
                }
                else
                    cout<<bank<<endl;
            }
        }
    }
    return 0;
}


