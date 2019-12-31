#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,j;
    string s,s0,s1,s2,s3;
    char x;

    s0="`1234567890-=";
    s1="QWERTYUIOP[]";
    s2="ASDFGHJKL;'";
    s3="ZXCVBNM,./";
    while(getline(cin,s)){
    len=s.length();
    for(i=0; i<len; i++)
    {
        for(j=0; j<s0.length(); j++)
        {
            if(s[i]==s0[j])
            {
                s[i]=s0[j-1];
            }
        }
        for(j=0; j<s1.length(); j++)
        {
            if(s[i]==s1[j])
            {
                s[i]=s1[j-1];
            }
        }
        for(j=0; j<s2.length(); j++)
        {
            if(s[i]==s2[j])
            {
                s[i]=s2[j-1];
            }
        }
        for(j=0; j<s3.length(); j++)
        {
            if(s[i]==s3[j])
            {
                s[i]=s3[j-1];
            }
        }
        if(s[i]==92){
            s[i]=']';
        }

    }
    cout<<s<<endl;
    }
    return 0;
}
