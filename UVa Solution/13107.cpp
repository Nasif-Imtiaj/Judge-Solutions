#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
//freopen("output.txt", "w", stdout);
    map<int,string>mp;
    for(int i=1; i<=26; i++)
    {
        stringstream ss;
        string x;
        ss<<i;
        ss>>x;
        mp[i]=x;
    }
    string s;
    while(cin>>s)
    {
        int len=s.length();
        int freq[35];
        string res;
        for(int i=0; i<30; i++)
            freq[i]=0;
        int pos=1;
        for(int i=0; i<len; i++)
        {
            if(freq[s[i]-97]==0)
            {
                freq[s[i]-97]=pos++;
            }
            res+=mp[freq[s[i]-97]];
        }
        len=res.length();
        for(int i=0; i<len; i++)
        {
            if(res[i]=='2')
                res[i]='5';
            else if(res[i]=='5')
                res[i]='2';
            else if(res[i]=='6')
                res[i]='9';
            else if(res[i]=='9')
                res[i]='6';
        }
        cout<<res<<endl;
    }
    return 0;
}


