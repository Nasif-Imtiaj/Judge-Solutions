#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int p2=0,p3=0,p5=0,p7=0;

string GetSuffix(int n)
{
    n = n % 100;
    if (n > 10 && n < 20)
        return "th";
    else if (n % 10 == 1)
        return "st";
    else if (n % 10 == 2)
        return "nd";
    else if (n % 10 == 3)
        return "rd";
    else
        return "th";
}
int main()
{
//freopen("output.txt", "w", stdout);
    int humble[6000];
    int a,b,c,i,z;
    humble[0]=1;
    for(i=1; i<5842; i++)
    {
        humble[i]=min(min(2*humble[p2],3*humble[p3]),min(5*humble[p5],7*humble[p7]));
        if(humble[i]==2*humble[p2])
            p2++;
        if(humble[i]==3*humble[p3])
            p3++;
        if(humble[i]==5*humble[p5])
            p5++;
        if(humble[i]==7*humble[p7])
            p7++;
    }
    while(cin>>a)
    {
        if(a==0)
            break;
        cout<<"The "<<a<<GetSuffix(a)<<" humble number is "<<humble[a-1]<<"."<<endl;
    }












    return 0;
}
