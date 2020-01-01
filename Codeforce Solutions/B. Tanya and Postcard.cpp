#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d,x[60],y[60],i,j,m,n,p=0,q=0;
    fill(x,x+60,0);
    fill(y,y+60,0);
    string s,s1,s3;
    cin>>s>>s1;
    a=s.length();
    b=s1.length();
    for(i=0; i<a; i++)
    {
        if(s[i]>90)
        {
            x[s[i]-97+30]++;
        }
        else
        {
            x[s[i]-65]++;
        }
    }
    for(i=0; i<b; i++)
    {
        if(s1[i]>90)
        {
            y[s1[i]-97+30]++;
        }
        else
        {
            y[s1[i]-65]++;
        }
    }
    for(i=0; i<60; i++)
    {
        m=x[i];
        n=y[i];
        x[i]=m-n;
        y[i]=n-m;
        if(x[i]<0)
        {
            x[i]=0;
        }
        if(y[i]<0)
        {
            y[i]=0;
        }
        if(m!=x[i])
        {
            p+=m-x[i];
        }
    }
    for(i=0,j=30; i<30; i++,j++)
    {
        swap(x[i],x[j]);
    }
    for(i=0; i<60; i++)
    {
        m=x[i];
        n=y[i];
        x[i]=m-n;
        y[i]=n-m;
        if(x[i]<0)
        {
            x[i]=0;
        }
        if(y[i]<0)
        {
            y[i]=0;
        }
        if(m!=x[i])
        {
            q+=m-x[i];
        }
    }
    cout<<p<<" "<<q<<endl;
    return 0;
}
