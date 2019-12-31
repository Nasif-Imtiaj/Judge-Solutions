#include<bits/stdc++.h>
using namespace std;
int k[65005];
int bg(int a,int b,int m)
{
    if(b==0)
        return 1%m;
   long long int x=bg(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;
}
int main()
{
    int a,b,c,i,track=0,j;
   for(i=3;i<=65000;i+=2){
    if(k[i]==0){
        for(j=i+i;j<=65000;j+=i)
            k[j]=1;
    }
   }
//freopen("output.txt", "w", stdout);
    while(cin>>a)
    {
        if(a==0)
            break;

        if(k[a]==0)
            printf("%d is normal.\n",a);
        else
        {
            for(i=2; i<a; i++)
            {
                c=bg(i,a,a);
                if(c!=i){
                    track=1;
                    printf("%d is normal.\n",a);
                    break;
                }
            }
            // cout<<track<<endl;
            if(track==0)
                printf("The number %d is a Carmichael number.\n",a);
        }
        track=0;
    }
    return 0;
}
