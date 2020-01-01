#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x[1000],y[1000],a,b,c,d,i,j,z=0;
    memset(x,0,1000);
    memset(y,0,1000);
    string s,s1;
    cin>>s>>s1;
     a=s.length();
     b=s1.length();
     for(i=0;i<a;i++){
        x[s[i]]++;
     }
    for(i=0;i<b;i++){
        y[s1[i]]++;
     }
  for(i=97;i<=122;i++)
{
    if(x[i]<y[i]){
        z++;
    }
}
if(z==0){
    cout<<s<<endl;
}
else{
    cout<<s<<" "<<s1<<endl;
}
return 0;
}
