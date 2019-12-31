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
ll Bigmod(int a,int b)
{
    if(b==0)
        return 1%10;
    ll x=Bigmod(a,b/2);
    x=(x*x)%10;
    if(b%2==1)
        x=(x*a)%10;
    return x;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int store[105];
    for(int j=0; j<100; j++)
    {
        ll sum=0;
        for(int i=1; i<=j; i++)
        {
            sum+=Bigmod(i,i);
            sum%=10;
        }
        store[j]=sum;
    }
    string s;
    while(cin>>s)
    {
        if(s[0]=='0')
            break;
        int len=s.length();
        int num=0;
        if(len==1)
        {
            num=s[0]-48;
        }
        else
        {
            num=s[len-2]-48;
            num*=10;
            num+=s[len-1]-48;
        }
        printf("%d\n",store[num]);
    }

    return 0;
}

