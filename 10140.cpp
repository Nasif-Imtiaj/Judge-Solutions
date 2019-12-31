#include<bits/stdc++.h>
using namespace std;
bool temp[100000000];
int prime[100000000];
int pos=1;
int main()
{
    int i,j,k;
    for(i=3; i<=10000000; i+=2)
    {
        if(temp[i]==0)
        {
            for(j=i+i; j<=10000000; j+=i)
            {
                temp[j]=1;
            }
            prime[pos]=i;
            pos++;
        }
    }
    prime[0]=2;
    //freopen("output.txt", "w", stdout);
    //  cout<<pos<<endl;
   // cout<<prime[0]<<endl;
    int start,finish,a,b,c;
    int s1,s2,low=10000000,m1,m2,high=0,found=0;
    while(cin>>a>>b){
    start=min(a,b);
    finish=max(a,b);
    for(i=0; i<pos; i++)
    {
        if(prime[i]>=start && prime[i+1]<=finish)
        {
            found++;
            c=prime[i+1]-prime[i];
            if(c<low)
            {
                s1=prime[i];
                s2=prime[i+1];
                low=c;
            //    cout<<s1<<" "<<s2<<endl;
            }
            if(c>high)
            {
                m1=prime[i];
                m2=prime[i+1];
                high=c;
            }
        }
        if(prime[i]>finish)
            break;
    }
    if(found!=0)
        printf("%d,%d are closest, %d,%d are most distant.\n",s1,s2,m1,m2);
    else
        printf("There are no adjacent primes.\n");

        low=10000000;
        high=0;
        found=0;

    }
    return 0;
}
