#include<bits/stdc++.h>
using namespace std;
int x[1000005];
int track_fact(int a)
{
    int i,z=0;
    while(a%2==0)
    {
        a/=2;
        z++;
    }
    for(i=3; i<=sqrt(a); i+=2)
    {
        while(a%i==0)
        {
            a/=i;
            z++;
        }
    }
    if(a==1)
        return z;
    else
        return z+=1;
}
int main()
{
  //  freopen("output.txt", "w", stdout);
    int ans=0,a,i,b;
     for(i=2; i<=1000000; i++)
        {
            b=track_fact(i);
           // cout<<b<<endl;
            ans+=b;
            x[i]=ans;
        }
    while(cin>>a)
    {

        cout<<x[a]<<endl;

    }

    return 0;
}
