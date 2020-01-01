#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,x[100009],high=0,z=0,i;

    cin>>a;

    for(i=0;i<a;i++)
    {
      cin>>x[i];
      if(x[i]>high){
        high=x[i];
      }
    }
    for(i=0;i<a;i++)
    {
      if(high%x[i]==0){
        z++;
      }
    }
    if(z==a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}
