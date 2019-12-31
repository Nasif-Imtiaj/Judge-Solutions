#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
vector<string>words;
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,b,c,i,on=0;
    string s,save,result,extra,ans;
    while(getline(cin,s))
    {
        i=0;
        int  len=s.length();
        while(i<len)
        {
            if(s[i]=='[')
            {
                on=1;
                i++;
                words.push_back(save);
                save.clear();
                continue;
            }
            else if(s[i]==']')
            {
                on=0;
                i++;
                words.push_back(save);
                save.clear();
                continue;
            }
            if(on==1)
            {
                save+=s[i];
            }
            else
                ans+=s[i];
            i++;
        }
        if(on==1)
            words.push_back(save);
        for(i=0; i<words.size(); i++)
        {
            reverse(words[i].begin(),words[i].end());
            extra+=words[i];
        }
        reverse(extra.begin(),extra.end());
        result=extra+ans;
        co(result);
        save.clear();
        ans.clear();
        words.clear();
        extra.clear();
    }
    return 0;
}
