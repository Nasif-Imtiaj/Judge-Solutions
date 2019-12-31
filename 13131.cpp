#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(a) scanf("%d",&a);
#define sl(a) scanf("%ld",&a);
#define sll(a) scanf("%lld",&a);
#define co(a)  cout<<a<<endl;
#define ci(a)  cin>>a;
#define pb push_back(a);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
vector<long long int>save;
ll divisors(ll a)
{
    ll  i,b;
    for(i=1; i<=sqrt(a); i++)
    {
        // co(i);
        if(a%i==0)
        {
            save.push_back(i);
            b=a/i;
            if(b!=i)
                save.push_back(b);
        }
    }
    return 0;
}
int main()
{
//freopen("output.txt", "w", stdout);

    ll a,b,c,d,e,sum=0,i;

    cin>>a;

    while(a--)
    {
        cin>>b>>c;

        divisors(b);

        for(i=0; i<save.size(); i++)
        {
            if(save[i]%c!=0)
                sum+=save[i];
        }
        co(sum);
        sum=0;
        save.clear();
    }




    return 0;
}
