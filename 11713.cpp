#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,len1,len2,z=0,i;
    string s,s1;
    cin>>a;
    while(a--)
    {
        cin>>s>>s1;
        len1=s.length();
        len2=s1.length();
        if(len1==len2)
        {
            for(i=0; i<len1; i++)
            {
                if(s[i]==s1[i])
                {
                    z++;
                }
                else if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') && (s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u'))
                {
                    z++;
                }
            }
            if(z==len1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
        z=0;
    }
    return 0;
}
