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
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        char s[60];
        scanf("%s",s);
        int ans=-1,len=strlen(s),hypen=-1,equall=-1;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='<')
            {
                int st=1;
                if(s[i+1]=='-' || s[i+1]=='=')
                {
                    st++;
                    for(int j=i+2; j<len; j++)
                    {
                        if(s[j]!=s[j-1])
                            break;
                        st++;
                    }
                }
                ans=max(ans,st);
            }
            if(s[i]=='>')
            {
                int st=1;
                if(i-1>=0)
                {
                    if(s[i-1]=='-' || s[i-1]=='=')
                    {
                        st++;
                        for(int j=i-2; j>=0; j--)
                        {
                            if(s[j]!=s[j+1])
                                break;
                            st++;
                        }
                    }
                }
                ans=max(ans,st);
            }
        }
        printf("Case %d: %d\n",cs++,ans);
    }

    return 0;
}

