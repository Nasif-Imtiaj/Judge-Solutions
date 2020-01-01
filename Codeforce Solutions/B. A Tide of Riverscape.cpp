#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,z=0,i,check=0;

    string s;

    cin>>a>>b>>s;

    for(i=0; i<a-b; i++)
    {
        if(s[i]==s[i+b] && s[i]!='.')
        {
            z++;
        }

    }
    check=a-b;
    if(check!=z)
    {
        for(i=0; i<a; i++)
        {
            if(s[i]=='.' && s[i+b]!='0' && s[i-b]!='0')
                s[i]='0';

           else if(s[i]=='.' && s[i+b]!='1' && s[i-b]!='1')
                s[i]='1';
           else  if(s[i]=='.'){
               s[i]='0';
           }
        }
        cout<<s<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
