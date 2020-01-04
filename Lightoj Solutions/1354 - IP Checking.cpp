#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
string make_bin(int a)
{
    string ans;
    while(a>0)
    {
        ans+=(a%2)+48;
        a/=2;
    }
    int add_Zero=8-ans.length();
    while(add_Zero>0)
    {
        ans+='0';
        add_Zero--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    cin>>t;
    getchar();
    while(t--)
    {
        string IP,IP_bin,res,temp;
        cin>>IP>>IP_bin;
        int i,len=IP.length();
        for(i=0; i<len; i++)
            if(IP[i]=='.')
                IP[i]=' ';
        stringstream ss;
        ss<<IP;
        int a,cnt=0;
        res.clear();
        while(ss>>a)
        {
            res+=make_bin(a);
            cnt++;
            if(cnt!=4)
                res+='.';
        }
        printf("Case %d: ",cs++);
        if(res==IP_bin)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
