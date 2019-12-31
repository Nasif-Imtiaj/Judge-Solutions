#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z=0,len,mark=0,l,i;

    string s,word;

    while(getline(cin,s))
    {
        len=s.length();

        for(i=0; i<len; i++)
        {
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
            {
                mark=1;
            }
            if(!(s[i]>='A' && s[i]<='Z') && !(s[i]>='a' && s[i]<='z') && s[i]!='-')
            {
                mark=0;
                l=word.length();
                if(l>0)
                {
                    z++;
                }
                word.clear();
            }
            if(mark==1)
            {
                word+=s[i];
            }
        }

        l=word.length();
        if(l>0)
        {
            z++;
        }
        cout<<z<<endl;
        z=0;
    }
    return 0;
}
