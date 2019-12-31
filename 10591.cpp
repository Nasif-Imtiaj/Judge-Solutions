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
int ori;
map<int,int>check;
int happy(int a)
{
    if(a==1) return 1;
    check[a]=1;
    int sum=0,b;
    while(a>0)
    {
        b=a%10;
        a/=10;
        sum+=b*b;
    }
    if(check[sum]==1)
        return 0;
    if(sum==1)
        return 1;
    return happy(sum);

}
int main()
{
//freopen("output.txt", "w", stdout);
    int b,i=1,t;
    cin>>t;
    while(t--)
    {
        cin>>ori;
        b=happy(ori);
        if(b==1)
            printf("Case #%d: %d is a Happy number.\n",i,ori);
        else
            printf("Case #%d: %d is an Unhappy number.\n",i,ori);
        i++;
        check.clear();
    }
    return 0;
}
