#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
string ans,s;
int main()
{
    freopen("output.txt", "w", stdout);
    int a,b,c,d;
    char y,x;
    stack<char>exp;
    cin>>a;
    getchar();
    getline(cin,s);
    while(a--)
    {
        exp.push('(');
        while(getline(cin,s))
        {
            if(s.length()==0)
                break;
            if(s[0]==')')
            {
                while(!exp.empty())
                {
                    y=exp.top();
                    exp.pop();
                    if(y=='(')
                        break;
                    ans+=y;
                }
            }
            else if(s[0]>='0' && s[0]<='9')
            {
                ans+=s[0];
            }
            else
            {
                y=s[0];
                x=exp.top();
                if(x=='*' && y=='-' || x=='*' && y=='+')
                {
                    while(!exp.empty())
                    {
                        x=exp.top();
                        if(x=='(')
                            break;
                        ans+=x;
                        exp.pop();
                    }
                }
                else if(x=='/' && y=='-' || x=='/' && y=='+')
                {
                    while(!exp.empty())
                    {
                        x=exp.top();
                        if(x=='(')
                            break;
                        ans+=x;
                        exp.pop();
                    }
                }
                else if(x=='+' && y=='-')
                {
                    while(!exp.empty())
                    {
                        x=exp.top();
                        if(!(x=='+' && y=='-'))
                            break;
                        ans+=x;
                        exp.pop();
                    }
                }
                else if(x=='/' && y=='*')
                {
                    while(!exp.empty())
                    {
                        x=exp.top();
                        if(!(x=='/' && y=='*'))
                            break;
                        ans+=x;
                        exp.pop();
                    }
                }
                exp.push(y);
            }
        }
        while(!exp.empty())
        {
            y=exp.top();
            exp.pop();
            if(y=='(')
                break;
            ans+=y;
        }
        cout<<ans<<endl;
        if(a>0)
            cout<<endl;
        ans.clear();
    }
    return 0;
}
