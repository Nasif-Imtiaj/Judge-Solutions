#include<bits/stdc++.h>
using namespace std;
int DP[1000000];
int prime[1000000];
int x[1000000];
int pos=1;
int ans[1000000];
int SOD(int a)
{
    int z=0;
    while(a>0)
    {
        z+=a%10;
        a/=10;
    }
    return z;
}
int check_prime(int a)
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
    //freopen("output.txt", "w", stdout);
    int i,j,m,n,z=0;
    for(i=3; i<1000000; i+=2)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<1000000; j+=i)
                x[j]=1;
            prime[pos]=i;
            pos++;
        }
    }
    prime[0]=2;
    // cout<<pos<<endl;
    for(i=0; i<pos; i++)
    {
        m=SOD(prime[i]);
        n=check_prime(m);
        if(n==0)
        {
            DP[prime[i]]=1;
        }
    }
    for(i=1; i<1000000; i++)
    {
        z+=DP[i];
        ans[i]=z;
    }
    int a,b,result,c;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d %d",&a,&b);
        result=ans[b]-ans[a-1];
        printf("%d\n",result);
    }
    return 0;
}
