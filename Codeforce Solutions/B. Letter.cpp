#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x[65],y[65],i,j,z=0;
    fill(x,x+60,0);
    fill(y,y+60,0);
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    a=s.length();
    b=s1.length();
    for(i=0; i<a; i++)
    {
        if(s[i]==' '){
            continue;
        }
        if(s[i]<=90)
        {
            x[s[i]-65]++;
        }
        else
        {
            x[s[i]-97+30]++;
        }
    }
    for(i=0; i<b; i++)
    {
        if(s1[i]==' '){
            continue;
        }
        if(s1[i]<=90)
        {
            y[s1[i]-65]++;
        }
        else
        {
            y[s1[i]-97+30]++;
        }
    }
    for(i=0; i<60; i++)
    {
        y[i]=y[i]-x[i];
        if(y[i]<0)
        {
            y[i]=0;
        }
        if(y[i]==0)
        {
            z++;
        }
    }
    if(z==60)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
