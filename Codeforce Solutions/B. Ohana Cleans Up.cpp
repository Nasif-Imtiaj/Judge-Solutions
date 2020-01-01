#include<bits/stdc++.h>
using namespace std;
struct box
{
    string s;
} d[110];
int main()
{
    int a,i,b,c,result=0,mark=0,ans,already_1=0,cnt=0;
    string check,easy;
    map<string,int>save;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>d[i].s;
    }
    for(i=0; i<a; i++)
    {
        easy=d[i].s;
        for(int j=0; j<a; j++)
        {
            if(easy[j]=='0')
            {
                check+=(j+1)+48;
                mark=1;
            }
            if(easy[j]=='1')
            {
                cnt++;
            }
        }
        if(cnt==a)
        {
            already_1++;
        }
        if(mark==1)
            save[check]++;
        check.clear();
        mark=0;
        cnt=0;
    }
    map<string,int>::iterator ok;
    for(ok=save.begin(); ok!=save.end(); ok++)
    {
        if(ok->second>result)
        {
            result=ok->second;
        }
    }
    if(result>already_1)
    {
        ans=result;
    }
    else
    {
        ans=already_1;
    }
    cout<<ans<<endl;
    return 0;
}
