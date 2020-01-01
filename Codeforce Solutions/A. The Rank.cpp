#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,d,m,n,o,p,i,s,x[1020],thomas=0,pos=0;


    cin>>s;

    for(i=0;i<s;i++)
    {
        cin>>a>>b>>c>>d;
        if(i==0){
            thomas=a+b+c+d;
        }
        x[i]=a+b+c+d;
    }
    sort(x, x+s, greater<int>());
    for(i=0;i<s;i++)
  {
      if(x[i]==thomas){
        pos=i;
        break;
      }
  }
  cout<<pos+1<<endl;
return 0;
}
