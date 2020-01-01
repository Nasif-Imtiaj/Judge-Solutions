#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,len,i,ans=0;
    string s,s_rev;
    cin>>s;
    s_rev=s;
    reverse(s_rev.begin(),s_rev.end());
    if(s.compare(s_rev)==0)
    {
       while(1){
           len=s.length();
           if(len==0){
            break;
           }
           s.erase(s.begin()+len-1);

           s_rev=s;
           reverse(s_rev.begin(),s_rev.end());
           if(s.compare(s_rev)!=0){
            ans=s.length();
            break;
           }
       }
    }
    else{
    ans=s.length();
   }
cout<<ans<<endl;
   return 0;
}
