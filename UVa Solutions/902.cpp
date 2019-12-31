#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
   // freopen("output.txt", "w", stdout);
    int i,high=0,a;
    map<string,int> pass;
    map<string,int> ::iterator it;
    string s,ans,temp;

    while(cin>>a){
    getchar();
    cin>>s;
    for(i=0; i<a; i++)
    {
        temp+=s[i];
    }
    pass[temp]++;
    for(i=a; i<s.length(); i++)
    {
        temp.erase(temp.begin()+0);
        temp+=s[i];
        pass[temp]++;
       // cout<<temp<<endl;
    }
    for(it=pass.begin();it!=pass.end();++it){
        if(it->second>high){
            high=it->second;
            ans=it->first;
        }
    }
    cout<<ans<<endl;
    pass.clear();
    ans.clear();
    high=0;
    temp.clear();
    }
    return 0;
}
