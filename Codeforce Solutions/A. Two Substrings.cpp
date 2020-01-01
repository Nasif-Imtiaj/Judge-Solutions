#include<bits/stdc++.h>
using namespace std;
int m1,m2;
int checking_availablity(string s, string s1)
{
    int i,a,z=0,j;
    a=s.length();
    for(i=0; i<=a-2; i++)
    {
        if(s[i]==s1[0])
        {
            for(j=0; j<2; j++)
            {
                if(s[i+j]==s1[j])
                {
                    z++;
                    if(j==0)
                    {
                        m1=i+j;
                    }
                    if(j==1)
                    {
                        m2=i+j;
                    }
                }
            }
        }
        if(z==2)
        {
            break;
        }
        z=0;
    }
    return z;
}
int main()
{
    int a,b,c,d,i,j=0,z=0,x=0,y=0;
    string s,s3,s1,s2;
    s1="AB";
    s2="BA";
    cin>>s;
    s3=s;
    a=checking_availablity(s,s1);
    if(a==2)
    {
        if(m1<m2){
            swap(m1,m2);
        }
        s[m1]=+32;
        s[m2]=+32;
        b=checking_availablity(s,s2);
        if(b==2)
        {
            x=1;
        }
        else
        {
            x=0;
        }
    }
    else
    {
        x=0;
    }
    c=checking_availablity(s3,s2);
    if(c==2)
    {
        if(m1<m2){
            swap(m1,m2);
        }
        s3[m1]=+32;
        s3[m2]=+32;
        d=checking_availablity(s3,s1);
        if(d==2)
        {
            y=1;
        }
        else
        {
            y=0;
        }
    }
    else
    {
        y=0;
    }
    if(x==1 || y==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
