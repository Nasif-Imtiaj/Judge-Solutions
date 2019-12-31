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
int digit_check(int a)
{
    int freq[10]= {0};
    while(a>0)
    {
        int b=a%10;
        a/=10;
        freq[b]++;
        if(freq[b]==2)
            return 1;
    }
    return 0;
}
int unsafe_houses[5050];
int main()
{
//freopen("output.txt", "w", stdout);
    for(int i=1; i<=5000; i++)
    {
        unsafe_houses[i]=unsafe_houses[i-1]+digit_check(i);
    }
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n>m)
            swap(n,m);
        int tot=m-n+1,affected=unsafe_houses[m]-unsafe_houses[n-1];
        printf("%d\n",tot-affected);
    }

    return 0;
}
