#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d,e,j,k=0;
    string s,s1,s2;
    cin>>s1>>s2>>s;
    a=s.length();
    for(int i=0; i<a; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
            k=1;
        }
        for(j=0; j<=26; j++)
        {
            if(s[i]==s1[j])
            {
                s[i]=s2[j];
                break;
            }
        }
        if(k==1)
        {
            s[i]-=32;
            k=0;
        }
    }
    cout<<s<<endl;
    return 0;
}
