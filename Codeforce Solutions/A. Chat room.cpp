#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int d1=0,d2=0,d3=0,d4=0,d5=0;
    string s,s2;
    cin>>s;
    a=s.length();
    for(int i=0;i<a;i++){
        if(s[i]=='h' && d1==0){
        s2+=s[i];
        d1=1;
        }
       else if(s[i]=='e' && d1==1){
            s2+=s[i];
            d2=1;
            d1=2;
        }
       else if(s[i]=='l' && d2==1){
            s2+=s[i];
            d3=1;
            d2=2;
        }
       else if(s[i]=='l' && d3==1){
            s2+=s[i];
            d4=1;
            d3=2;
        }
       else if(s[i]=='o' && d4==1){
            s2+=s[i];
            d4=2;
            d5=1;
        }
    }
if(s2.compare("hello")==0)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}
