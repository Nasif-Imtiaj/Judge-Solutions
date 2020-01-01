#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x[30],z=0,i,j,sub_c=0,len2;
    string s,check,sub;
    check="abcdefghijklmnopqrstuvwxyz";
    cin>>s;
    int len=s.length();
    for(i=0; i<len; i++)
    {
        if(i==0)
        {
            sub+=s[i];
        }
        if(i!=0)
        {
            len2=sub.length();

            for(j=0; j<len2; j++)
                if(s[i]!=sub[j])
                {
                    sub_c++;
                }
            if(sub_c==len2)
            {
                sub+=s[i];
            }
        }
        sub_c=0;
    }
    len2=sub.length();
    for(j=0; j<len2; j++)
    {
        if(check[j]==sub[j])
        {
            z++;
        }
    }
    if(z==len2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
