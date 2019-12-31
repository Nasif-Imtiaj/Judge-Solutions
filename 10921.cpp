#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,len,i;
    string s;

    while(cin>>s)
    {
        len=s.length();
        for(i=0; i<len; i++)
        {
            if(s[i]=='A' || s[i]=='B' || s[i]=='C')
            {
                s[i]='2';
            }
            if(s[i]=='D' || s[i]=='E' || s[i]=='F')
            {
                s[i]='3';
            }
            if(s[i]=='G' || s[i]=='H' || s[i]=='I')
            {
                s[i]='4';
            }
            if(s[i]=='J' || s[i]=='K' || s[i]=='L')
            {
                s[i]='5';
            }
            if(s[i]=='M' || s[i]=='N' || s[i]=='O')
            {
                s[i]='6';
            }
            if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S')
            {
                s[i]='7';
            }
            if(s[i]=='T' || s[i]=='U' || s[i]=='V')
            {
                s[i]='8';
            }
            if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
            {
                s[i]='9';
            }
        }
        cout<<s<<endl;
    }
return 0;
}
