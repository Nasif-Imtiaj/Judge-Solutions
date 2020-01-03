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
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a=0,b,arr[n+2],dif=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&b);
            dif=max(dif,b-a);
            arr[i]=b;
            a=b;
        }
        int ans=dif;
        a=0;
        bool flg=0;
        for(int i=0; i<n; i++){
            b=arr[i]-a;
            a=arr[i];
            if(b==dif)
                dif--;
            else if(b>dif)
            {
                flg=1;
                break;
            }
        }
        if(flg==1)
            ans++;
        printf("Case %d: %d\n",cs++,ans);
    }







    return 0;
}
