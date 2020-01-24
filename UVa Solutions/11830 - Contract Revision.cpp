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
    string x,y;
    while(cin>>x>>y)
    {
        if(x[0]=='0' && y[0]=='0')
            break;
        string z;
        int len=y.length();
        for(int i=0; i<len; i++)
            if(y[i]!=x[0])
                z+=y[i];
        int pos=0;
        len=z.length();
        while(z[pos]=='0')
            pos++;
        if(pos==len)
            cout<<"0"<<endl;
        else
        {
            for(int i=pos;i<len;i++)
                cout<<z[i];
            cout<<endl;
        }
    }

    return 0;
}
