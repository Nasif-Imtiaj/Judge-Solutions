#include<bits/stdc++.h>
using namespace std;
unsigned long long int lcm_calcu(unsigned long long int x[],unsigned long long int a)
{
  unsigned long long int i,z=1,j;
    for(i=0; i<a; i++)
    {
        for(j=i+1; j<a; j++)
        {
            if(x[j]%x[i]==0)
            {
                x[j]/=x[i];
            }
        }
    }
    for(i=0; i<a; i++)
    {
        z*=x[i];
    }
    return z;
}
unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{

    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
   // freopen("output.txt", "w", stdout);
  unsigned long long int a,b,c,i,j,x[10000],y[10000],add=0,ans=0,check;
    cin>>b;
    for(j=1; j<=b; j++)
    {
        cin>>a;
        for(i=0; i<a; i++)
        {
            cin>>x[i];
            y[i]=x[i];
        }
        c=lcm_calcu(x,a);
        for(i=0; i<a; i++)
        {
            add+=(double)c/(double)y[i];
        }
        ans=c*a;
        while(1)
        {
            check=gcd(ans,add);
            if(check==1)
            {
                cout<<"Case "<<j<<": "<<ans<<"/"<<add<<endl;
                break;
            }
            else
            {
                ans/=check;
                add/=check;
            }
        }
        add=0;
    }
    return 0;
}
