#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a,b,news;
    int len,i,j,len2;
    while(getline(cin,s))
    {
        len=s.length();

        for(i=0; i<len; i++)
        {
            if(s[i]!=' ')
            {
                a+=s[i];
            }
            else
            {
                reverse(a.begin(),a.end());
                news+=a;
                news+=' ';
                a.clear();
            }
        }
        reverse(a.begin(),a.end());
        news+=a;
        cout<<news<<endl;
        news.clear();
        a.clear();
    }
    return 0;
}
