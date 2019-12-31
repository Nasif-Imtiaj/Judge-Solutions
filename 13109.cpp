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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int arr[n+5],cnt=0;;
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        ll sum=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(sum+arr[i]<=m)
            {
                sum+=arr[i];
                cnt++;
            }
            else
                break;
        }
        printf("%d\n",cnt);

    }

    return 0;
}

