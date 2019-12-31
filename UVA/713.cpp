#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len1,len2,carry=0,c,x=0,y=0,z=0;
    string s,s1,ans;
    cin>>c;
    getchar();
    while(c--)
    {
        cin>>s>>s1;
        reverse(s.begin(),s.end());
        reverse(s1.begin(),s1.end());
        while(s[0]=='0')
        {
            s.erase(s.begin()+0);
        }
        while(s1[0]=='0')
        {
            s1.erase(s1.begin()+0);
        }
        len1=s.length();
        len2=s1.length();
        len1--;
        len2--;
        while(1)
        {
            if(len1>-1)
            {
                x=s[len1]-48;
                len1--;
            }
            if(len2>-1)
            {
                y=s1[len2]-48;
                len2--;
            }
            z=x+y+carry;
            carry=0;
            if(z>9)
            {
                carry=z/10;
                z%=10;
            }
            ans+=z+48;
            z=0;
            x=0;
            y=0;
            if(len1==-1 && len2==-1)
            {
                break;
            }
        }
        if(carry!=0)
        ans+=carry+48;
        while(ans[0]=='0')
        {
            ans.erase(ans.begin()+0);
        }
        cout<<ans<<endl;
       x=0,y=0,carry=0,z=0;
       ans.clear();
    }
    return 0;
}
