#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,len,z=0,ans=0,i;

    double gf;

    string s4,s7,s47;

    stringstream p;

    cin>>a;

    b=a;
    c=a;
    p<<a;
    p>>s47;

    len=s47.length();

    for(i=0;i<len;i++){
        if(s47[i]=='4' || s47[i]=='7' || s47[i]=='.'){
            z++;
        }
    }
    if(z==len){
        cout<<"YES"<<endl;
    }
    else{

        if(b%4==0 || c%7==0 || b%44==0 || b%47==0 || b%74==0 || b%444==0 || b%447==0 || b%477==0 || b%777==0 || b%744==0 || b%747==0 || b%777==0){

            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}
