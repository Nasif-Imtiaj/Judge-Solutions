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
int n,arr[20],taken[20];
void recur(int pos,int cnt,int used[])
{
    if(cnt==6)
    {
        for(int i=0; i<n; i++)
        {
            if(used[i])
            {
                if(cnt!=6)
                    printf(" ");
                printf("%d",arr[i]);
                cnt--;
            }
        }
        printf("\n");
        return;
    }
    if(pos==n)
        return;

    used[pos]=1;
    recur(pos+1,cnt+1,used);
    used[pos]=0;
    recur(pos+1,cnt,used);
}
int main()
{
//freopen("output.txt", "w", stdout);
    int tc=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        if(tc)
            printf("\n");
        recur(0,0,taken);
        tc=1;
    }

    return 0;
}

