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
bool leap_year(int a)
{
    if(a%400==0)
        return 1;
    if(a%100==0)
        return 0;
    if(a%4==0)
        return 1;
    return 0;
}
bool before(string x,string y)
{
    if(x=="January" || x=="February")
        return 1;
    else
        return 0;
}
bool after(string x,string y)
{
    if(x=="January")
        return 0;
    else if(x=="February")
    {
        if(y=="29,")
            return 1;
        else
            return 0;
    }
    else
        return 1;
}
int leap_yeant_cnt(int a)
{
    return (a/4)-((a/100)-(a/400));
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        string a1,b1,a2,b2;
        int y1,y2,cur1,cur2,ans;
        cin>>a1>>b1>>y1;
        cin>>a2>>b2>>y2;
        cur1=leap_yeant_cnt(y1);
        cur2=leap_yeant_cnt(y2);
   // cout<<cur1<<" "<<cur2<<endl;
        if(leap_year(y1) && before(a1,b1))
            cur1--;
        if(leap_year(y2) && !after(a2,b2))
            cur2--;
   // cout<<cur1<<" "<<cur2<<endl;
        ans=cur2-cur1;

        printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}

