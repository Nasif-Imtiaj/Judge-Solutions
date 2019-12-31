#include<bits/stdc++.h>
using namespace std;
int divisors(long long int a)
{
    int z=2,i,b;
    if(a==1)
        z=1;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            b=a/i;
            if(b!=i)
            z+=2;
            else
                z++;
        }
    }
    return z;
}
int main()
{
    long long int a,b,i,j,c,d,e,ans=0,val;
    cin>>a;
    while(a--)
    {
        cin>>c>>d;
        for(i=c; i<=d; i++)
        {
            b=divisors(i);
            if(b>ans){
            ans=b;
            val=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",c,d,val,ans);
            ans=0;
    }
    return 0;
}
