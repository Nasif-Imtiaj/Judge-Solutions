#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
  // freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int arr[105],moves[101],pos=0,n,m,R=0,a,b,i;
        char x;
        scanf("%d %d",&n,&m);
        string s;
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        while(m--)
        {
            cin>>x;
            if(x=='P')
            {
                scanf("%d %d",&a,&b);
                if(R==0)
                    swap(arr[a],arr[b]);
                else
                    swap(arr[n-a-1],arr[n-b-1]);
            }
            else if(x=='S')
            {
                s+=x;
                scanf("%d",&a);
                moves[pos++]=a;
            }
            else if(x=='M')
            {
                s+=x;
                scanf("%d",&a);
                moves[pos++]=a;
            }
            else if(x=='D')
            {
                s+=x;
                scanf("%d",&a);
                moves[pos++]=a;
            }
            else
            {
                if(R==0)
                    R=1;
                else
                    R=0;
            }
        }
        for(int j=0; j<n; j++)
            for(i=0; i<pos; i++)
            {
                if(s[i]=='S')
                {
                    arr[j]+=moves[i];
                }
                else if(s[i]=='D')
                    arr[j]/=moves[i];
                else
                    arr[j]*=moves[i];
            }
         printf("Case %d:\n",cs++);
        if(R==0)
        {
            for(i=0; i<n-1; i++)
                printf("%d ",arr[i]);
            printf("%d\n",arr[i]);
        }
        else
        {
            for(i=n-1; i>0; i--)
                printf("%d ",arr[i]);
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}

