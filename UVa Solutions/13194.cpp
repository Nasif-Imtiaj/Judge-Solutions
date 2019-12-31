#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int x[1000000];
vector<int>prime;
void sieve()
{
    int i,j;
    for(i=2; i<=1000000; i++)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<=1000000; j+=i)
            {
                x[j]=1;
            }
            prime.push_back(i);
        }
    }


}
int main()
{
//freopen("output.txt", "w", stdout);


    sieve();

    ll a,b,c,d,i,j,fact,val,res=1;
    cin>>a;
    b=a;
    for(i=0; i<prime.size(); i++)
    {
        if(b%prime[i]!=0)
            continue;
        else
        {
            d=prime[i];
            fact=prime[i];
            while(b%d==0)
            {

            }

        }

    }









    return 0;
}
