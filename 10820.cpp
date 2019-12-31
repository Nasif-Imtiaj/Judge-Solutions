#include<bits/stdc++.h>
using namespace std;
int phi[10000006],mark[1000006];
int main()
{
   // freopen("output.txt", "w", stdout);
    int a,b,c,i,j,ans=0,k;
    for(i=1;i<=50000;i++)
        phi[i]=i;
    phi[1]=1;
    mark[1]=1;
    for(i=2;i<=50000;i++){
        if(!mark[i]){
            for(j=i;j<=50000;j+=i){
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
    while(cin>>a){
            if(a==0)
            break;
    for(k=1;k<=a;k++){
        if(k==1)
            ans+=phi[k]*a;
        else
            ans+=phi[k]*2-1;
    }
    cout<<ans<<endl;

  ans=0;
    }






return 0;
}
