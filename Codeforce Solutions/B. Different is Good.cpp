#include<bits/stdc++.h>
using namespace std;
int main()
{

  string s;

  int a,b,x[1000];

  memset(x,0,1000);

  cin>>b>>s;

  a=s.length();

  for(int i=0;i<a;i++){
    x[s[i]]++;
  }

  int z=0;

  for(int j=97;j<=122;j++){
    if(x[j]>1){
        z+=x[j]-1;
    }
  }
if(a>26){
    z=-1;
}
cout<<z<<endl;
return 0;
}
