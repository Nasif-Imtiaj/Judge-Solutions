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
int main()
{
  //  freopen("output.txt", "w", stdout);
    int k,i=1;
    int a,b,c,d,e,f,g,x,y,z=0,high1,high2;
    cin>>k;
    while(k--)
    {
        cin>>a>>b>>c>>d>>e>>f>>g;
        z+=a;
        z+=b;
        z+=c;
        z+=d;
       high1=max(e,f);
       high1=max(high1,g);
       if(high1==e)
        high2=max(f,g);
      else if(high1==f)
        high2=max(e,g);
      else
        high2=max(e,f);
      z+=(high1+high2)/2;
        printf("Case %d: ",i);
        if(z>=90)
        {
            co("A")
        }
        else if(z>=80 && z<90)
        {
            co("B")
        }
        else if(z>=70 && z<80)
            co("C")
        else if(z>=60 && z<70)
                co("D")
        else
        co("F")
       i++;
        z=0;
    }
    return 0;
}
