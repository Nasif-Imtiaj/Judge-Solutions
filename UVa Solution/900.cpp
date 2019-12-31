#include<bits/stdc++.h>
using namespace std;
int fibo(int a)
{
    if(a==1)
        return 1;
    if(a==2)
        return 2;
    int b=1,c=2,x=0;
    a-=2;
    while(a--){
        x=b+c;
        b=c;
        c=x;
    }
    return x;
}
int main()
{
  int a,b;
  while(cin>>a){
    if(a==0)
    break;
    b=fibo(a);
    cout<<b<<endl;
  }
return 0;
}
