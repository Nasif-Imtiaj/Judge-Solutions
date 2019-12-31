#include<bits/stdc++.h>
using namespace std;
int track=0;
long long int large_prime(long long int a)
{
    track=0;
    long long int  prime,i,note=1,no_change=0;
    while(a%2==0)
    {
        prime=2;
        if(note>0){
        track++;
        note--;
        }
        a/=2;
    }
    for(i=3; i<=sqrt(a); i+=2)
    {
        note=1;
        while(a%i==0)
        {
            if(note>0){
            track++;
            note--;
            }
            prime=i;
            a=a/i;
        }
    }
    if(a!=1)
        track++;
    if(a>2)
    {
        prime=a;
    }
    return prime;
}
int main()
{
    //freopen("output.txt", "w", stdout);
   long long int a,b,c;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        if(a<0){
            a*=-1;
        }
        b=large_prime(a);
        if(track>1)
            cout<<b<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
