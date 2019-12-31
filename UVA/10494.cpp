#include<bits/stdc++.h>
using namespace std;
int main()
{

//freopen("output.txt", "w", stdout);
    unsigned long long int a,b,c,len,i,carry=0,x=0,mark=0;
    char y,z;
    string s,ans;
    while(cin>>s)
    {
        getchar();
        cin>>y;
        getchar();
        cin>>a;
        len=s.length();
        for(i=0; i<len; i++)
        {
            x*=10;
            x+=s[i]-48;
            // cout<<x<<endl;
            if(x<a){
                ans+=48;
                carry*=10;
                carry+=s[i]-48;
            }
            else
            {
                mark=1;
                c=x/a;

                carry=x%a;
               // cout<<x<<" "<<c<<" "<<carry<<endl;
                x=carry;
                ans+=c+48;
            }
        }
        if(y=='%')
        {
            if(mark==1)
                cout<<carry<<endl;
            else
                cout<<s<<endl;
        }
        else
        {
            while(ans[0]=='0')
            {
                ans.erase(ans.begin()+0);
            }

            if(mark==1)
                cout<<ans<<endl;
            else
                cout<<"0"<<endl;
        }
        carry=0,x=0,mark=0;
        ans.clear();
    }
    return 0;
}
