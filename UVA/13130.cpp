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

    int a,c,t,x[10],i,z=0;
    cin>>t;
    while(t--)
    {
        z=0;
        for(i=0; i<5; i++)
        {
            cin>>x[i];
        }
        for(i=0; i<4; i++)
        {
            if(x[i+1]-x[i]==1)
                z++;
        }
        if(z==4)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;

    }
    return 0;
}
