#include<bits/stdc++.h>
using namespace std;

int prime(long long int a){
long long int i,z=0;
for(i=2;i<=sqrt(a);i++)
    if(a%i==0)
{
    z++;
    break;
}
return z;
}
long long int BG(long long int a,long long int b,long long int m){
if(b==0) return 1%m;
long long int x=BG(a,b/2,m);
x=(x*x)%m;
if(b%2==1) x=(x*a)%m;
return x;
}
int main()
{
//freopen("output.txt", "w", stdout);
  long long int a,b,c;

  while(cin>>a>>b){
  if(a==0 && b==0)
    break;
  c=prime(a);
  if(c==0)
    cout<<"no"<<endl;
  else{

    c=BG(b,a,a);

    if(c==b)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
  }
  }
return 0;
}
