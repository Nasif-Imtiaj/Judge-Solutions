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
bool isLeapYear(int year)
{
    if (year % 400 == 0)
        return true;
    else if(year % 100 == 0)
        return false;
    else if(year % 4 == 0)
        return true;
    else
        return false;
}


int main()
{
//freopen("output.txt", "w", stdout);


    int a,b,c,d,e,f,i,g=0,j;

    cin>>e;

    for(i=1; i<=e; i++)
    {
        f=0;
        cin>>a>>b>>c>>d;
        if(a==29 && b==2)
        {
            for(j=c+1;j<=d;j++){
                if(isLeapYear(j))
                    f++;
            }

        }
        else
            f=d-c;

        printf("Case %d: %d\n",i,f);
    }














    return 0;
}
