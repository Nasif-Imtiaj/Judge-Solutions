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
double store[1000005];
int main()
{
//freopen("output.txt", "w", stdout);
    double incre=2;
    store[2]=2;
    for(int i=3; i<=1000000; i++)
    {
        if(i!=3)
            incre+=0.66666667;
        store[i]=incre+store[i-1];
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        double sq=sqrt(store[n]);
        cout<<setprecision(6)<<fixed<<sq<<endl;
    }

    return 0;
}
