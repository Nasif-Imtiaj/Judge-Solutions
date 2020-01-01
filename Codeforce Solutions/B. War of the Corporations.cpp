#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,k,l,x=0,z=0;
    string s,s1;
    cin>>s>>s1;
    a=s.length();
    b=s1.length();
    l=a-b+1;
    for(i=0; i<l; i++)
    {
        if(s[i]==s1[0])
        {
            for(j=0; j<b; j++)
            {
                if(s[j+i]==s1[j])
                {
                    x++;
                }
            }
        }
        if(x==b)
        {
            z++;
            i=i+b-1;
        }
        x=0;
    }
    cout<<z<<endl;
    return 0;
}
