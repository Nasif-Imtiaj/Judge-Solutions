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
        int n;
         scanf("%d",&n);
        int arr[n+5];
        int cnt=0;
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        for(int i=n-1; i>0; i--)
        {
            int temp=0;
            for(int j=i-1; j>=0; j--)
            {
                if(arr[i]>=arr[j])
                    temp++;
            }
            cnt+=temp;
        }
        printf("%d\n",cnt);
    }

    return 0;
}

