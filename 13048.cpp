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
        string s;
        cin>>s;
        int len=s.length();
        int mark[len+5];
        for(int i=0; i<len; i++)
            mark[i]=0;
        int possible=len;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='D')
            {
                if(mark[i]==0)
                    possible--;
                mark[i]=1;
            }
            else if(s[i]=='B')
            {
                if(mark[i]==0)
                    possible--;
                mark[i]=1;
                if(i-1>=0)
                {
                    if(mark[i-1]==0)
                        possible--;
                    mark[i-1]=1;
                }
                if(i-2>=0)
                {
                    if(mark[i-2]==0)
                        possible--;
                    mark[i-2]=1;
                }
            }
            else if(s[i]=='S')
            {
                if(mark[i]==0)
                    possible--;
                mark[i]=1;
                if(i-1>=0)
                {
                    if(mark[i-1]==0)
                        possible--;
                    mark[i-1]=1;
                }
                if(i+1<len)
                {
                    if(mark[i+1]==0)
                        possible--;
                    mark[i+1]=1;
                }
            }
        }
        printf("Case %d: %d\n",cs++,possible);

    }

    return 0;
}

