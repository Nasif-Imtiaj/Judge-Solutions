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
void divi(int a)
{
    int sum=1,sq=sqrt(a);
    for(int i=2; i<=sq; i++)
    {
        if(a%i==0)
        {
            int b=a/i;
            sum+=i;
            if(b!=i)
                sum+=b;
        }
    }
    if(sum<a)
        printf("deficient\n");
    else if(sum==a)
        printf("perfect\n");
    else
        printf("abundant\n");
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        divi(n);
    }

    return 0;
}
