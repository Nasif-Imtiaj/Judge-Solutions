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
const int base = 1337;
ll pw[300015];
ll HASH[300015];
void pre_power()
{
    pw[0] = 1;
    for(int i = 1; i < 300015; i++)
    {
        pw[i] = (pw[i - 1] * base) % MOD;
    }
}
ll get_hashval(string str)
{
    int len=str.length();
    ll hash_val=0;
    for(int i = 0; i < len; i++)
    {
        hash_val=((hash_val*base)+str[i])%MOD;
        HASH[i+1]=hash_val;
    }
    return hash_val;
}
ll SubstringHash(int l, int r)
{
    return (HASH[r] - (HASH[l - 1] * pw[r - l + 1]) % MOD + MOD) % MOD;
}
int main()
{
//freopen("output.txt", "w", stdout);
    pre_power();
    string s;
    vector<string>v,words;
    map<ll,int>mp;
    while(cin>>s)
    {
        words.push_back(s);
        ll H=get_hashval(s);
        mp[H]=1;
    }
    int words_sz=words.size();
    for(int i=0; i<words_sz; i++)
    {
        int len=words[i].size();
        ll H=get_hashval(words[i]);
        for(int j=0; j<len; j++)
        {
            ll l,r;
            l=SubstringHash(1,j);
            r=SubstringHash(j+1,len);
            if(mp[l] && mp[r])
            {
                v.push_back(words[i]);
                break;
            }
        }
    }
    sort(v.begin(),v.end());
    int sz=v.size();
    for(int i=0; i<sz; i++)
        cout<<v[i]<<endl;

    return 0;
}

