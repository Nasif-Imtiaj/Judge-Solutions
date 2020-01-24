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
    int n,s;
    while(scanf("%d %d",&n,&s)!=EOF)
    {
        int arr[n+5];
        for(int i=0; i<n; i++)
          scanf("%d",&arr[i]);
        int l=0,r=0,sum=0,mx=INT_MAX;
        while(r<n)
        {
            if(sum<s)
            {
                sum+=arr[r++];
            }
            else
            {
                while(sum>=s)
                {
                    mx=min(r-l,mx);
                    sum-=arr[l++];
                }
            }
        }
        while(sum>=s)
        {
            mx=min(r-l,mx);
            sum-=arr[l++];
        }
        if(mx==INT_MAX)
            mx=0;
        printf("%d\n",mx);
    }

    return 0;
}

