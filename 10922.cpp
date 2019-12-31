#include<bits/stdc++.h>
using namespace std;
int ans=0;
int degree(int a)
{
    int b,sum=0;
   // cout<<a<<endl;
    if(a%9==0 && a!=9)
    {
        ans++;
        while(a>0)
        {
           // cout<<"ho"<<endl;
            sum+=a%10;
            a/=10;
        }
        return degree(sum);
    }
    if(a==9)
    ans++;
    return 0;
}
int main()
{

//freopen("output.txt", "w", stdout);
    int i,j,sum=0,len,nine=0,deg;

    string s;

    while(cin>>s)
    {
        if(s[0]=='0')
            break;
        len=s.length();
        for(i=0; i<len; i++)
        {
            if(s[i]=='9')
                nine++;
            sum+=s[i]-48;
        }
        if(sum%9==0)
        {
            ans=0;
            degree(sum);
            deg=ans;
            cout<<s<<" is a multiple of 9 and has 9-degree "<<deg<<"."<<endl;
        }
        else
            cout<<s<<" is not a multiple of 9."<<endl;

        sum=0;
    }

    return 0;
}
