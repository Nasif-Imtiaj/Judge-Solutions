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
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    char s[20];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        int n,m;
        n=(s[0]-'A')*26*26;
        n+=(s[1]-'A')*26;
        n+=(s[2]-'A');

        m=s[4]-48;
        m*=10;
        m+=(s[5]-48);
        m*=10;
        m+=(s[6]-48);
        m*=10;
        m+=(s[7]-48);
        int dif=n-m;
        if(dif<0)
            dif*=-1;
        if(dif<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }

    return 0;
}

