#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,temp,ok,temp1;
    stringstream d;
    int a,b,c,i,x=0,y=0,j,k,m,n,t,g=0;
    cin>>a>>b>>s>>s1;
    t=b-a+1;
    for(i=0; i<t; i++)
    {
        for(j=0+i,k=0; j<a+i; j++,k++)
        {
            if(s[k]==s1[j])
            {
                y++;
            }
            else
            {
                d<<k+1;
                d>>temp1;
                temp+=temp1;
                temp+=' ';
                d.clear();
                temp1.clear();
            }
        }
        if(y>x || g==0)
        {
            x=y;
            ok=temp;
            g=1;
        }
        y=0;
        temp.clear();
    }
    m=a-x;

    cout<<m<<endl;
    cout<<ok<<endl;

    return 0;
}
