#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,len,i,j;
    char y[200];
    string s;
    while(gets(y))
    {
        x=0;
        s+=y;
        len=s.length();
        for(i=0; i<len; i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                x+=s[i]-48;
            }
            if(s[i]>='A' && s[i]<='Z')
            {
                for(j=0; j<x; j++)
                    cout<<s[i];
                x=0;
            }
            if(s[i]=='b')
            {
                for(j=0; j<x; j++)
                    cout<<" ";
                x=0;
            }
            if(s[i]=='!')
                cout<<endl;
            if(s[i]=='*')
            {
                for(j=0; j<x; j++)
                    cout<<s[i];
                x=0;
            }
        }
        printf("\n");
        s.clear();
    }
    return 0;
}
