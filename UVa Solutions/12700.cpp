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
int main()
{
    //freopen("output.txt", "w", stdout);
    int b=0,t=0,a=0,w=0,i,m,n,c,j;
    string s;
    cin>>m;
    for(j=1; j<=m; j++)
    {
        cin>>c;
        getchar();
        cin>>s;
        for(i=0; i<c; i++)
        {
            if(s[i]=='B')
                b++;
            else if(s[i]=='A')
                a++;
            else if(s[i]=='T')
                t++;
            else
                w++;
        }
        printf("Case %d: ",j);
        if(w==0 && t==0 && b>0)
        {
            cout<<"BANGLAWASH"<<endl;
        }
        else if(b>w)
        {
            cout<<"BANGLADESH"<<" "<<b<<" - "<<w<<endl;
        }
        else if(b==0 && t==0 && w>0)
        {
            cout<<"WHITEWASH"<<endl;
        }
        else if(w>b)
        {
            cout<<"WWW"<<" "<<w<<" - "<<b<<endl;
        }
        else if(b==0 && w==0 && t==0)
            cout<<"ABANDONED"<<endl;
        else
            cout<<"DRAW"<<" "<<b<<" "<<t<<endl;

        b=0,t=0,a=0,w=0;
    }
    return 0;
}
