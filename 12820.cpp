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
char s[1000005];
int cool()
{
    int freq[30];
    for(int i=0; i<28; i++)
        freq[i]=0;
    map<int,int>mp;
    int len=strlen(s),two=0;
    for(int i=0; i<len; i++)
        freq[s[i]-97]++;
    for(int i=0; i<28; i++)
    {
        if(freq[i])
        {
            two++;
            mp[freq[i]]++;
            if(mp[freq[i]]==2)
                return 0;
        }
    }
    if(two==1)
        return 0;
    return 1;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    while(scanf("%d",&t)!=EOF)
    {
        int ans=0;
        while(t--)
        {
            scanf("%s",s);
            ans+=cool();
        }
        printf("Case %d: %d\n",cs++,ans);
    }

    return 0;
}

