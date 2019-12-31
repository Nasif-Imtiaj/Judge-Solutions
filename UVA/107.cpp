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
ll x,y;
ll total_cats[100000];
bool isPower(int a)
{
    if (a == 1)
        return true;

    for (int i = 2; i * i <= a; i++)
    {
        double val = log(a) / log(i);
        if ((val - (int)val) < 0.00000001)
        {
            x=i;
            y=val;
            return true;
        }
    }
    return false;
}
int main()
{
//freopen("output.txt", "w", stdout);
    ll a,b,c,d,N,i,j,sum=0,height,temp,lazy_cat=1;
    double m,n,o;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        sum=0;
        lazy_cat=1;
        if(isPower(b))
        {
            sum=a;
            height=a;
            N=x;
            N++;
            total_cats[0]=1;
            for(i=1; i<=y; i++)
            {
                total_cats[i]=total_cats[i-1]*x;
                if(i!=y)
                    lazy_cat+=total_cats[i];
            }
            i=1;
            while(i<=y)
            {
                temp=height/N;
                height=temp;
                sum+=height*total_cats[i];
                i++;
            }
            cout<<lazy_cat<<" "<<sum<<endl;
        }
        else{
         sum=a;
         sum+=



        }
    }
    return 0;
}
