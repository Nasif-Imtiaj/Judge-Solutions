#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
long long int track=0;
int k[1000000];
long long int random(long long int z,long long int i,long long int m,long long int l)
{
    unsigned long long int x;
    x=(z*l+i)%m;
    track++;
    if(k[x]==1)
        return x;
    else
    {
        k[x]++;
        return random(z,i,m,x);
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    long long int z,l,m,i,ans,j=1,o;
    while(cin>>z>>i>>m>>l)
    {
        if(z==0 && i==0 && m==0 && l==0)
            break;
        track=0;
        fill(k,k+1000000,0);
        k[l]++;
        o=random(z,i,m,l);
        if(o!=l)
            track--;
        printf("Case %lld: ",j);
        cout<<track<<endl;
        j++;
    }
    return 0;
}
