#include<bits/stdc++.h>
using namespace std;
long long int x[1000];
long long int divisors( long long int a)
{
  long long int b,i,j,c,z=0;
    b=sqrt(a);
    for(i=1; i<=b; i++)
    {
        if(a%i==0)
        {
            x[z]=i;
            z++;
            c=a/i;
            if(c!=i)
            x[z]=a/i;
            z++;
        }
    }
    return z;
}
long long int COP(long long int a,long long int b)
{
    if(a%b==0)
        return b;
    return COP(b,a%b);
}
int main()
{

   // freopen("output.txt", "w", stdout);
   long long int i,j,a,div_count,big,small,ans=0;
   long long int gcd,lcm,mark=0;
    while(cin>>a){
         if(a==0){
            break;
         }
    div_count=divisors(a);
   // cout<<div_count<<endl;
    for(i=0; i<div_count; i++)
    {
        if(x[i]==a){
            ans++;
        }
      //  cout<<x[i]<<endl;
        for(j=i+1; j<div_count; j++)
        {
            if(x[i]<x[j])
            {
                small=x[i];
                big=x[j];
            }
            else
            {
                small=x[j];
                big=x[i];
            }
            gcd=COP(small,big);

            if(((big*small)/gcd)==a){
           // cout<<small<<" "<<big<<endl;
                ans++;
            }
        }
    }
    cout<<a<<" "<<ans<<endl;
    ans=0;
}
    return 0;
}
