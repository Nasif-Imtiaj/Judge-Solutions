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
        ll a,b,c,d,e,f,g,h;
        cin>>a>>b>>c>>d;
        printf("Case %d: ",cs++);
        e=abs(c-a);
        f=abs(d-b);
        if(e==f){
            cout<<"1"<<endl;
        continue;
        }
        else if(e==0)
        {
            if(b%2==0 && d%2==0 || b%2!=0 && d%2!=0)
                cout<<"2"<<endl;
            else
                cout<<"impossible"<<endl;
            continue;
        }
        else if(f==0)
        {
            if(a%2!=0 && c%2!=0 || a%2==0 && c%2==0)
                cout<<"2"<<endl;
            else
                cout<<"impossible"<<endl;
            continue;
        }
        if(e%2==0 && f%2!=0 || e%2!=0 && f%2==0)
             cout<<"impossible"<<endl;
        else
            cout<<"2"<<endl;
    }
    return 0;
}

