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
vector<ll>save;
int main()
{
//freopen("output.txt", "w", stdout);
    ll i,a,b,c,d,x[100000],result=0,total=0;
    priority_queue<int, vector<int>, greater<int> > PQ;
    while(cin>>a)
    {
        if(a==0)
            break;
        for(i=0; i<a; i++)
        {
            cin>>b;
            PQ.push(b);
        }
        while(PQ.size()>1){
            total=PQ.top();
            PQ.pop();
            total+=PQ.top();
            PQ.pop();
            result+=total;
            PQ.push(total);
        }
        PQ.pop();
        co(result)
        result=0;
    }
    return 0;
}
