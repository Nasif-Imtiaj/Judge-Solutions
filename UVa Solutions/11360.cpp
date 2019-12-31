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
string s[1000];
int mark[100][100];
void transpose(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(mark[i][j]==0 && mark[j][i]==0)
            {
                swap(s[i][j],s[j][i]);
                mark[i][j]=1;
                mark[j][i]=1;
            }
        }
    }
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            mark[i][j]=0;
}
void row_interchange(int n,int a,int b)
{
    a--;
    b--;
    for(int i=0; i<n; i++)
        swap(s[a][i],s[b][i]);
}
void coloumn_interchange(int n,int a,int b)
{
    a--;
    b--;
    for(int i=0; i<n; i++)
        swap(s[i][a],s[i][b]);
}
void inc(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            s[i][j]++;
            if(s[i][j]>'9')
                s[i][j]='0';
        }
    }
}
void dec(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            s[i][j]--;
            if(s[i][j]<'0')
                s[i][j]='9';
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            cin>>s[i];
        int q;
        scanf("%d",&q);
        while(q--)
        {
            string str;
            cin>>str;
            if(str=="inc")
                inc(n);
            else if(str=="dec")
                dec(n);
            else if(str=="transpose")
                transpose(n);
            else if(str=="row")
            {
                int a,b;
                scanf("%d %d",&a,&b);
                row_interchange(n,a,b);
            }
            else
            {
                int a,b;
                scanf("%d %d",&a,&b);
                coloumn_interchange(n,a,b);
            }
        }
        printf("Case #%d\n",cs++);
        for(int i=0;i<n;i++)
            cout<<s[i]<<endl;
        printf("\n");
    }

        return 0;
    }

