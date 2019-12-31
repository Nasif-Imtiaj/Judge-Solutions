#include<bits/stdc++.h>
using namespace std;
int x[100000];
int prime[10000],pos=1;
int check_prime(int a){
int i,z=0;
for(i=2;i<=sqrt(a);i++){
    if(a%i==0)
    {
        z++;
        break;
    }
}
return z;
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int  i,j;
    for(i=3;i<=10000;i+=2){
        if(x[i]==0){
            for(j=i+i;j<=10000;j+=i){
                x[j]=1;
            }
            prime[pos]=i;
            pos++;
        }
    }
    prime[0]=2;
    //cout<<pos<<endl;
    int a,ans=0,sum=0,b;
    while(cin>>a){
            if(a==0)
            break;
    for(i=0;i<pos;i++){
            sum=prime[i];
        for(j=i+1;j<pos;j++){
            sum+=prime[j];
            if(sum>a)
                break;
            if(sum==a)
            {
                ans++;
                break;
            }
        }
        if(prime[i]>a)
            break;
    }
    b=check_prime(a);
    if(b==0)
        ans++;
    cout<<ans<<endl;
    sum=0;
    ans=0;
    }
return 0;
}
