#include<bits/stdc++.h>
using namespace std;
long long int sum=0,total=0;
long long int divisors(long long int a)
{
  long long int b,c,i;
  b=sqrt(a);
  for(i=1;i<=b;i++)
  {
      if(a%i==0){
        total++;
        sum+=i;
       c=a/i;
       if(c!=i)
       {
           sum+=c;
           total++;
       }
      }
  }
  return 0;
}
int main()
{
//freopen("output.txt", "w", stdout);
 int a,b,c,d,i;

 cin>>d;

 while(d--)
{
    sum=0;
    total=0;
  cin>>a>>b>>c;

  for(i=a;i<=b;i++)
  {
      if(i%c==0){
        divisors(i);
      }

  }
  cout<<total<<" "<<sum<<endl;
}
return 0;
}
