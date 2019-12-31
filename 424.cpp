#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len1,i,j,len2,track=0,x,y,z,carry=0;
    string s,ans,temp;
    ans="0";
    while(cin>>s)
    {
        if(s.compare("0")==0)
        {
            cout<<ans<<endl;
            break;
        }
        track++;
        if(track==1)
            ans=s;
        else
        {
            len1=s.length();
            len2=ans.length();
            len1--;
            len2--;
            while(len1>-1 || len2>-1)
            {
                if(len1>-1)
                    x=s[len1]-48;
                if(len2>-1)
                    y=ans[len2]-48;
                z=x+y+carry;
                carry=0;
                if(z>9){
                carry=z/10;
                z=z%10;
                }
               temp+=z+48;
               x=0,y=0;
               len1--;
               len2--;
            }
            if(carry!=0)
                temp+=carry+48;
            reverse(temp.begin(),temp.end());
            ans=temp;
            temp.clear();
            x=0,y=0,carry=0;
        }
    }
    return 0;
}
