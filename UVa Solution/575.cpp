#include<bits/stdc++.h>
using namespace std;
unsigned long long int pow(int a)
{
    if(a==1)
        return 2;
   unsigned long long int ans=2;
    a--;
    while(a--)
    {
        ans*=2;
    }

    return ans;
}
unsigned long long int MD(string s)
{
   unsigned long long int ans=0;
    int len,l=0;
    len=s.length();
    while(len>0)
    {
        ans+=(s[l]-48)*(pow(len)-1);
        //cout<<ans<<endl;
        l++;
        len--;
    }
    return ans;
}
int main()
{
   unsigned long long int ans;
    string s;
    while(cin>>s){
    if(s.compare("0")==0)
        break;
    ans=MD(s);
    cout<<ans<<endl;
    }
return 0;
}
