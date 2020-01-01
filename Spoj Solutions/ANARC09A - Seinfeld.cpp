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
    int cs=1;
    while(cin>>s)
    {
        if(s[0]=='-')
            break;
        int cnt=0,len=s.length();
        stack<char>st;
        for(int i=0; i<len; i++)
        {
            if(st.size()==0)
                st.push(s[i]);
            else
            {
                char ft=st.top();
                if(ft=='{' && s[i]=='}')
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            char x,y;
            x=st.top();
            st.pop();
            y=st.top();
            st.pop();
            if(x==y)
                cnt++;
            else
                cnt+=2;
        }
        printf("%d. %d\n",cs++,cnt);
    }


    return 0;
}
