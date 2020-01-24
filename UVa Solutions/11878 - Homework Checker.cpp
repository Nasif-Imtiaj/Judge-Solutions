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
    string s;
    int cnt=0;
    while(cin>>s)
    {
        int len=s.length(),x=0,y=0,op=0,z=0;
        if(s[len-1]=='?')
            continue;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='+')
                op=1;
            else if(s[i]=='-')
                op=2;
            if(s[i]=='-' || s[i]=='+' || s[i]=='=')
                s[i]=' ';
        }
        stringstream ss;
        ss<<s;
        ss>>x;
        ss>>y;
        ss>>z;
        if(op==1)
        {
            if(x+y==z)
                cnt++;
        }
        else
        {
            if(x-y==z)
                cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
