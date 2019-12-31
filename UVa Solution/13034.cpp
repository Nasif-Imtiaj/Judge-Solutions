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
    int a,b,t,x=0;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        for(a=0; a<13; a++)
        {
            cin>>b;
            if(b==0)
                x++;
        }
        printf("Set #%d: ",i);
        if(x==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
            x=0;
    }











    return 0;
}
