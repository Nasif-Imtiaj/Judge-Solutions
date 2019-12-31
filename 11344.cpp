#include<bits/stdc++.h>
using namespace std;
int div(string s,int a)
{
    int d,carry=0,len,i;
    len=s.length();
    for(i=0; i<len; i++)
    {
        d=s[i]-48+carry*10;
        // cout<<d<<endl;
        carry=d%a;
        //cout<<carry<<endl;
    }
return carry;
}
int main()
{

//freopen("output.txt", "w", stdout);
    int a,b,c,i,x[15],track=0;

    string num;

    cin>>c;
    getchar();
    while(c--)
  {
    cin>>num;
    cin>>a;
    for(i=0;i<a;i++)
        cin>>x[i];
    for(i=0;i<a;i++){
     b=div(num,x[i]);
     if(b==0)
     track++;
     else{
        cout<<num<<" - Simple."<<endl;
        break;
     }
    }
    if(track==a)
        cout<<num<<" - Wonderful."<<endl;
    track=0;
  }
return 0;
}
