#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,c,d,s,m,n,q,t;

cin>>t;
  while(t--){
    cin>>s>>a>>b>>c;
    m=s/c;
    n=m/a;
    q=n*b;
    cout<<q+m<<endl;
  }


return 0;
}
