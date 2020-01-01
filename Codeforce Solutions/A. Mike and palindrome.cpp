#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,z=0;

    string s,s1;

    cin>>s;

    a=s.length();

    for(i=0,j=a-1;i<a;i++,j--)
    {
        if(s[i]==s[j]){
            z++;
        }
    }
    b=a-z;
   if(b==2){
    cout<<"YES"<<endl;
   }
   else if(b==0){
    if(a%2!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
   else{
    cout<<"NO"<<endl;
   }
return 0;
}
