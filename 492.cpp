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
int main()
{
//freopen("output.txt", "w", stdout);

    int i,a,b,c;

    string s,words,ans;

    while(getline(cin,s))
    {
        for(i=0; i<=s.length(); i++)
        {
            if(!(s[i]>='A' && s[i]<='Z') && !(s[i]>='a' && s[i]<='z'))
            {
                if(words[0]=='a' || words[0]=='A' || words[0]=='e' || words[0]=='E' || words[0]=='i' || words[0]=='I' || words[0]=='o' || words[0]=='O' || words[0]=='u' || words[0]=='U')
                {
                    words+="ay";
                }
                else if(words.length()>0)
                {
                    char x;
                    x=words[0];
                    words.erase(words.begin()+0);
                    words+=x;
                    words+="ay";
                }
                ans+=words;
                words.clear();
                if(i!=s.length())
                ans+=s[i];
            }
            else
                words+=s[i];
        }
        co(ans);
    ans.clear();
    words.clear();
    }











    return 0;
}
