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
int make_int(string s)
{
    int val=0;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        val*=10;
        val+=s[i]-48;
    }
    return val;
}
int main()
{
//freopen("output.txt", "w", stdout);
    string s;
    stack<string>x,y;
    while(getline(cin,s))
    {
        if(s[0]=='0')
            break;
        int len=s.length();
        string cur_word,ans,temp;
        for(int i=0; i<=len; i++)
        {
            if(!((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')))
            {
                if(cur_word[0]>='0' && cur_word[0]<='9')
                {
                    int val=make_int(cur_word);
                    int n=val,m=val;
                    while(n--)
                    {
                        temp=x.top();
                        x.pop();
                        if(n)
                            y.push(temp);
                    }
                    ans+=temp;
                    ans+=s[i];
                    while(m--)
                    {
                        if(m==0)
                            break;
                        x.push(y.top());
                        y.pop();
                    }
                    x.push(temp);
                    cur_word="";
                }
                else
                {
                    if(cur_word.size())
                        x.push(cur_word);
                    ans+=cur_word;
                    ans+=s[i];
                    cur_word="";
                }
            }
            else
                cur_word+=s[i];
        }
        ans.pop_back();
        cout<<ans<<endl;
    }

    return 0;
}
