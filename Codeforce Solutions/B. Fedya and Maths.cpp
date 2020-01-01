#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,len,carry=0;

    string s;

    cin>>s;

    len=s.length();

    for(i=0;i<len;i++)
    {
        a=s[i]-48+(10*carry);
        carry=a%5;
    }
    cout<<carry<<endl;
return 0;
}
