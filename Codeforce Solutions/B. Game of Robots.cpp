#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,x[100010],i,z=0,t;

    cin>>a>>b;

    for(i=0; i<a; i++)
    {
        cin>>x[i];
    }
    for(i=1; i<=100000; i++)
    {
        z=(i*(i+1))/2;
        if(z>=b)
        {
            z=((i-1)*(i))/2;
            break;
        }
    }
    t=b-z-1;
    cout<<x[t]<<endl;
    return 0;
}
