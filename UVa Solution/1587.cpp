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
int main()
{
freopen("output.txt", "w", stdout);


    int i=0,a,b,c=0,check=0,z=0,x[20];
    map<int,int>ok;
    map<int,int>::iterator it;
    while(cin>>a>>b)
    {
        ok[a]++;
        ok[b]++;
        z++;
        if(z==6)
        {
            z=0;
            c=0;
            check=0;
            for(it=ok.begin(); it!=ok.end(); ++it)
            {
                check+=it->second/4;
            }
            if(check==3){
                co("POSSIBLE")
            }
            else
                co("IMPOSSIBLE")
                ok.clear();
        }

    }











    return 0;
}
