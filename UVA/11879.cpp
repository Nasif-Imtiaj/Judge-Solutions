#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,i,len,z=0;

    string s;

    while(cin>>s)
    {
        if(s.compare("0")==0)
            break;
        len=s.length();
        for(i=0; i<len; i++)
        {
            z*=10;
            b=s[i]-48;
            z+=b;
            z=z%17;
        }
        if(z==0)
            printf("1\n");
        else
            printf("0\n");
        z=0;
    }
    return 0;
}
