
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,n,p,q,x[1000],ans=0,i=1;
   cin>>c;
   while(c--){
   cin>>n>>p>>q;

   while(n--){
    cin>>b;
    if(p>0 && b<=q){
        ans++;
        p--;
        q-=b;
    }
   }
   printf("Case %d: %d\n",i,ans);
   ans=0;
   i++;
   }
    return 0;
}
