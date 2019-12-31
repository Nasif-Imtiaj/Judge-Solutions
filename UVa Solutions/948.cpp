#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
ll fibo[100000];
int main()
{
    freopen("output.txt", "w", stdout);
    ll a,b,c,i,j,flg=0;
    fibo[0]=0;
    fibo[1]=1;
    for(i=2; i<45; i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    cin>>b;
    while(b--)
    {
        cin>>a;
        printf("%lld = ",a);
        for(i=44; i>=2; i--)
        {
            if(a/fibo[i]==1)
            {
                cout<<"1";
                flg=1;
                a=a-fibo[i];
            }
            else if(a/i==0 && flg==1)
                cout<<"0";
        }
        flg=0;
        printf(" (fib)");
        cout<<endl;
    }
    return 0;
}
