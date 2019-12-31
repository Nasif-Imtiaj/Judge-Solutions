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
    map<string,string>mp;
    int n,m;
    cin>>n>>m;
    while(n--)
    {
        string x,y;
        cin>>x>>y;
        mp[x]=y;
    }
    while(m--)
    {
        string s;
        cin>>s;
        int len=s.length();
        if(mp[s].length())
        {
            cout<<mp[s]<<endl;
        }
        else if(s[len-1]=='y')
        {
            if(len>2)
            {
                if(s[len-2]!='a' && s[len-2]!='e' && s[len-2]!='i' && s[len-2]!='o' && s[len-2]!='u')
                {
                    s[len-1]='i';
                    s+="es";
                }
                else
                    s+="s";
            }
            else
                s+="es";
            cout<<s<<endl;
        }
        else if(s[len-1]=='o' || s[len-1]=='s' || s[len-1]=='x')
        {
            s+="es";
            cout<<s<<endl;
        }
        else
        {
            if(len>2)
            {
                if((s[len-2]=='c' && s[len-1]=='h') || (s[len-2]=='s' && s[len-1]=='h'))
                    s+="es";
                else
                    s+="s";
                cout<<s<<endl;
            }
        }
    }


    return 0;
}
