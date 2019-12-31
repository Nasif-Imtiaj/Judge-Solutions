#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,carry=0,len;

//freopen("output.txt", "w", stdout);
    string s;
    while(cin>>s)
    {
        if(s.length()==1)
            break;
        len=s.length();
        for(i=0; i<len; i++)
        {
            d=s[i]-48+carry*10;
       // cout<<d<<endl;
            carry=d%11;
        //cout<<carry<<endl;
        }
        if(carry==0)
            cout<<s<<" is a multiple of 11."<<endl;
        else
        {
            cout<<s<<" is not a multiple of 11."<<endl;
        }
        carry=0;
    }
    return 0;
}
