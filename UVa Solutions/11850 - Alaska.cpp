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
    while(scanf("%d",&t)!=EOF)
    {
        if(!t)
            break;
        int freq[1800]= {};
        while(t--)
        {
            int n;
            scanf("%d",&n);
            freq[n]=1;
        }
        int flg=1,energy=0;
        for(int i=0; i<=1422; i++)
        {
            if(energy)
                energy--;
            if(freq[i])
                energy=200;
            if(!energy && !freq[i])
            {
                flg=0;
                break;
            }
        }
        if(flg)
            for(int i=1422; i>=0; i--)
            {
                if(energy)
                    energy--;
                if(freq[i])
                    energy=200;
                if(!energy && !freq[i])
                {
                    flg=0;
                    break;
                }
            }
        if(flg)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}

