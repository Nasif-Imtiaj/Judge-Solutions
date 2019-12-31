#include<bits/stdc++.h>
using namespace std;

long long int prime(long long int a)
{

   long long int z=0,b,i,ans=0,temp=0,check=0;
    b=a;

    while(a%2==0)
    {
        a/=2;
        z++;
        temp=1;
    }
    while(z--)
    {
        temp*=2;
    }
    ans+=temp;
    //cout<<ans<<endl;
    for(i=3; i<=sqrt(a); i+=2)
    {
        temp=0;
        z=0;
        while(a%i==0)
        {
            check=1;
            a/=i;
            z++;
            temp=1;
        }

        while(z--)
        {
            temp*=i;
        }
        ans+=temp;
    }
    if(a!=1)
        ans+=a;

    if(ans==b)
        ans++;


    return ans;
}


int main()
{
   // freopen("output.txt", "w", stdout);
    long long int a,b,c,i=1;

    while(cin>>a)
    {
        if(a==0)
            break;
        b=prime(a);
        if(a==1)
            b=2;
        cout<<"Case "<<i<<": "<<b<<endl;
        i++;
    }
    return 0;
}
