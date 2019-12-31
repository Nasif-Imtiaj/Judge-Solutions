#include<bits/stdc++.h>
using namespace std;
long long int loopphi(long long int a)
{
   long long int ret=a,i;
    for(i=2; i*i<=a; i++)
    {
        if(a%i==0)
        {
            while(a%i==0)
            {
                a/=i;
            }
            ret-=ret/i;
        }
    }
    if(a>1)
        ret-=ret/a;
    return ret;
}
int div(long long int a)
{
    if(a==1)
        return 1;

    int i,z=0,b;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            z++;
            b=a/i;
            if(b!=i)
                z++;
        }
    }
    z+=2;
    return z;
}
int main()
{
   // freopen("output.txt", "w", stdout);
    long long int a,b,z=0;
    while(cin>>a)
    {
        if(a==0)
            break;
        z+=div(a);
        z+=loopphi(a)-1;
        b=a-z;
        printf("%lld\n",b);
        z=0;
    }
    return 0;
}
