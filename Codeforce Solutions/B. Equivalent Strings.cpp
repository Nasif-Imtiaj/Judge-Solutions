#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,d,x[30],y[30],z[30],w[30],m=0,n=0,o=0,p[30],q[30];
    string s,s1,s2;
    string a1,a2,b1,b2;
    fill(x,x+30,0);
    fill(y,y+30,0);
    fill(z,z+30,0);
    fill(w,w+30,0);
    fill(p,p+30,0);
    fill(q,q+30,0);
    cin>>s>>s1;
    a=s.length();
    if(a%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(i=0; i<a; i++)
        {
            p[s[i]-97]++;
            q[s1[i]-97]++;
        }
        //checking if the strings are equal,if they have the same elements
        for(i=0; i<26; i++)
        {
            if(p[i]!=q[i])
            {
                o=1;
                break;
            }
        }
        for(i=0; i<a; i++)
        {
            if(i<a/2)
            {
                a1+=s[i];
                b1+=s1[i];
            }
            else
            {
                a2+=s[i];
                b2+=s1[i];
            }
        }
        for(i=0; i<a/2; i++)
        {
            x[a1[i]-97]++;
            y[a2[i]-97]++;
            z[b1[i]-97]++;
            w[b2[i]-97]++;
        }
        //comparing a1 with b1 & a2 with b2
        for(i=0; i<26; i++)
        {
            if(x[i]!=z[i])
            {
                n=1;
                break;
            }
            if(y[i]!=w[i])
            {
                n=1;
                break;
            }
        }
        //comparing a1 with b2 & a2 with b1
        for(i=0; i<26; i++)
        {
            if(x[i]!=w[i])
            {
                m=1;
                break;
            }
            if(y[i]!=z[i])
            {
                m=1;
                break;
            }
        }
        if(n==0 && o==0|| m==0 && o==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
