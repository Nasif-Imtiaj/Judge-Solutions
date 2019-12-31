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
ll cubes[10000];
vector< pair <int,int> >xy;
int main()
{
//freopen("output.txt", "w", stdout);

    ll a,b,c,i,j,check,found;

    for(i=1;i<=100;i++){
        cubes[i]=i*i*i;
    }

    while(cin>>a){
    if(a==0)
        break;
    for(i=100;i>=1;i--)
    {
        for(j=1;j<=i;j++){
            check=cubes[i]-cubes[j];
            if(check==a){
                xy.push_back(make_pair(i,j));
            }
        }
    }
    if(xy.size()==0)
        co("No solution")
    else{
        sort(xy.begin(),xy.end());

        cout<<xy[0].first<<" "<<xy[0].second<<endl;
    }

    xy.clear();
    }




    return 0;
}
