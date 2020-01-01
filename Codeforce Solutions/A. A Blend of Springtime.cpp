#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,z=0,i,j,x[5],mark=0,len;

    fill(x,x+5,0);

    string s,temp;

    cin>>s;

    a=s.length();

    for(int i=0; i<a; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')
        {
            mark=1;
        }
        if(s[i]=='A' && s[i+1]=='C' && s[i+2]=='B')
        {
            mark=1;
        }
        if(s[i]=='B' && s[i+1]=='A' && s[i+2]=='C')
        {
            mark=1;
        }
        if(s[i]=='B' && s[i+1]=='C' && s[i+2]=='A')
        {
            mark=1;
        }
        if(s[i]=='C' && s[i+1]=='A' && s[i+2]=='B')
        {
            mark=1;
        }
        if(s[i]=='C' && s[i+1]=='B' && s[i+2]=='A')
        {
            mark=1;
        }
    }

    if(mark==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
