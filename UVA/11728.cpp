#include<bits/stdc++.h>
using namespace std;
int x[1005];
int divisors(int a)
{
    int i,b,c,z=0;
    for(i=1; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            b=a/i;
            z+=i;
            if(b!=i)
            {
                z+=b;
            }
        }
    }
    return z;
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int i,a,c,b,ans=-1,j;
    for(i=1; i<=1000; i++)
    {
        c=divisors(i);
        x[i]=c;
    }
    i=1;
    while(cin>>b)
    {
        if(b==0)
            break;
        for(j=1; j<=1000; j++)
        {
            if(x[j]==b)
                ans=j;
        }
        if(ans==-1)
            printf("Case %d: -1\n",i);
        else
            printf("Case %d: %d\n",i,ans);
            ans=-1;
            i++;

    }
    return 0;
}
