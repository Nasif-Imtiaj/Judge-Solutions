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
int n,m;
ll arr[100005];
bool cmp(int a,int b)
{
    if(a%m <b%m)
        return 1;
    else if(a%m> b%m)
        return 0;
    else
    {
        if(a%2==0)
        {
            if(b%2==0)
            {
                if(a<b)
                    return 1;
                else
                    return 0;
            }
            return 0;
        }
        else
        {
            if(b%2==0)
                return 1;
            else
            {
                if(a>b)
                    return 1;
                return 0;
            }
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);

    while(scanf("%d %d",&n,&m)!=EOF)
    {
        printf("%d %d\n",n,m);
        if(n==0 && m==0)
            break;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,cmp);

        for(int i=0; i<n; i++)
            printf("%lld\n",arr[i]);
    }
    return 0;
}
