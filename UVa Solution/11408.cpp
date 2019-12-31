#include<bits/stdc++.h>
using namespace std;
long int x[5000000];
long int DP[5000000];
long int ans[5000000];
int check_prime( int a)
{
int i,z=0;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            z++;
            break;
        }
    }
    return z;
}
int main()
{
   long int a,b,d,i,j,c,y=0;
    for(i=2; i<=5000000; i++)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<=5000000; j+=i)
            {
                x[j]=1;
                DP[j]+=i;
            }
            DP[i]=i;
        }
        c=check_prime(DP[i]);
        if(c==0)
            y++;
        ans[i]=y;
    }
    while(cin>>a,a)
    {
        cin>>b;
        d=ans[b]-ans[a-1];
        printf("%ld\n",d);
    }
    return 0;
}
