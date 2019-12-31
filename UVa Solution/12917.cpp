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
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        c-=b;
        if(c>=a)
            printf("Props win!\n");
        else
            printf("Hunters win!\n");

    }

    return 0;
}

