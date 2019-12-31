#include<bits/stdc++.h>
using namespace std;
long int PF[2710000];
int prime_fact(int a)
{
    int z=0,i;
    while(a%2==0)
    {
        a/=2;
        z++;
    }
    for(i=3; i<=sqrt(a); i+=2)
    {
        while(a%i==0)
        {
            a/=i;
            z++;
        }
    }
    if(a!=1)
        z++;
    return z;
}
int BS(int l,int h,int a,long int PF[])
{
    while(l<=h)
    {
        int mid;
        mid=(l+h)/2;
        if(PF[mid]==a)
            return mid;
        else if(PF[mid]>a)
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int main()
{
    //freopen("output.txt", "w", stdout);
    int i,j=1,ans=0,b,a,c;
    for(i=2; i<=2705000; i++)
    {
        b=prime_fact(i);
        ans+=b;
        PF[i]=ans;
    }
    while(cin>>a)
    {
        if(a<0)
            break;
        c=BS(2,2705000,a,PF);
        if(a==0)
            printf("Case %d: 0!\n",j);
       else if(c==-1)
            printf("Case %d: Not possible.\n",j);
        else
            printf("Case %d: %d!\n",j,c);
        j++;
    }
    return 0;
}
