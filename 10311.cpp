#include<bits/stdc++.h>
using namespace std;
int x[100000000];
int y[100000000];
int check_prime(long long int a)
{
    if(a==0)
        return 1;
    int z=0,i;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)
            z++;
    }
    return z;
}
int main()
{
    int i,j,k,l=1;
    for(i=3; i<=50000000; i+=2)
    {
        if(x[i]==0)
        {
            for(j=i; j<=50000000; j+=i)
            {
                x[j]=1;
            }
            y[l]=i;
            l++;
        }
    }
    y[0]=2;
    // cout<<l<<endl;
//freopen("output.txt", "w", stdout);
    long long int a,b,c,d;

    while(cin>>a)
    {

        for(i=0; i<l; i++)
        {
            b=a-y[i];
            if(b<=0)
                break;
            c=check_prime(b);
            if(c==0)
                break;
        }
        if(c==0)
        {
            printf("%lld is the sum of %d and %lld.\n",a,y[i],b);
        }
        else
            printf("%lld is not the sum of two primes!\n",a);
        c=1;
    }
    return 0;
}
