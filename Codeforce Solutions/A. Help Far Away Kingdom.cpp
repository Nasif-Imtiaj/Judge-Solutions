#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,carry=0;

    string s,s1;

    cin>>s;

    a=s.length();

    for(i=0;i<a;i++)
    {
        if(s[i]=='.'){
            break;
        }
        s1+=s[i];
    }
    if(s[i-1]=='9'){
        cout<<"GOTO Vasilisa."<<endl;
    }
    else if(s[i+1]<'5'){
         cout<<s1<<endl;
    }
    else if(s[i+1]>='5')
 {
     b=s1.length();

      for(i=b-1;i>=0;i--){
        c=s1[i]-48;
        c=c+1+carry;
        carry=0;
        if(c>9){
            carry=c/10;
            c=c%10;
        }
        c=c+48;
       s1[i]=c;
       if(carry==0){
        break;
       }
      }
      cout<<s1<<endl;
 }
return 0;
}
