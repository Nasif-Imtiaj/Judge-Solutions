#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x[10000],y[1000],z=0,w=0,t=0;

    memset(x,0,1000);
    memset(y,0,1000);

    string s,s1,s2,s3;

    cin>>s>>s1>>s2;

    s3=s+s1;

    a=s2.length();
    b=s3.length();
    for(int i=0;i<a;i++)
    {
        x[s2[i]]++;
    }

    for(int j=0;j<b;j++){
        y[s3[j]]++;
    }


for(int i=65;i<=90;i++)
    {
        if(x[i]==y[i] && x[i]>0 && y[i]>0){
            t++;
        }
        if(x[i]>0){
            z++;
        }
        if(y[i]>0){
            w++;
        }
    }

  if(t==z && t==w){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

return 0;
}
