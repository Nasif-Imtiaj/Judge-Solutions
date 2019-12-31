#include<bits/stdc++.h>
using namespace std;
long long int sum[5000000];

long long int BS(int l, int h,long long int x,long long int sum[]){
while(l<=h){
    int mid=(l+h)/2;
    if(sum[mid]==x)
        return mid;
    else if(sum[mid]<x)
        l=mid+1;
    else
        h=mid-1;
}
return -1;
}

int main()
{
    freopen("output.txt", "w", stdout);
    long long int a,b,c,i,check;
    for(i=1; i<=200000; i++)
    {
        sum[i]=(i*(i+1))/2;
    }
   long long int track,high,flg=0,found=0,ans=0,last=0;
    while(cin>>a)
    {
        if(a==-1)
            break;
        for(i=1; i<=200000; i++)
        {
            if(sum[i]==a)
            {
                printf("%lld = 1 + ... + %lld\n",a,i);
                flg=1;
                break;
            }
            if(sum[i]>a)
            {
                high=sum[i]-a;
               // cout<<high<<" "<<i<<" "<<sum[i]<<endl;
                ans=BS(0,i,high,sum);
                if(ans!=-1){
                printf("%lld = %lld + ... + %lld\n",a,ans+1,i);
                flg=1;
                break;
                }
            }
        }
        if(flg==0){
            printf("%lld = %lld + ... + %lld\n",a,a,a);
        }
    flg=0,found=0,ans=0,last=0;
    }
    return 0;
}
