#include<bits/stdc++.h>
using namespace std;
int freq_prime[1000000];
int last_digit=1;
int ans[1000000];
int check_prime(int a)
{
    int z=0,i;
    while(a%2==0)
    {
        a/=2;
        z++;
    }
    if(z>freq_prime[2])
    {
        freq_prime[2]=z;
        last_digit*=2;
        while(last_digit%10==0)
        {
            last_digit/=10;
        }
        last_digit%=100;
    }
    for(i=3; i<=sqrt(a); i+=2)
    {
        if(a%i==0)
        {
            z=0;
            while(a%i==0)
            {
                a/=i;
                z++;
            }
            if(z>freq_prime[i])
            {
                freq_prime[i]=z;
                last_digit*=i;
                while(last_digit%10==0)
                {
                    last_digit/=10;
                }
                last_digit%=100;
            }
        }
    }
    if(a!=1)
    {
        if(freq_prime[a]==0)
        {
            freq_prime[a]++;
            last_digit*=a;
            while(last_digit%10==0)
            {
                last_digit/=10;
            }
            last_digit%=100;
        }
    }
    return 0;
}
int main()
{
   // freopen("output.txt", "w", stdout);

    int a,i,b;
    for(i=1; i<=1000000; i++)
    {
        check_prime(i);
        ans[i]=last_digit%10;
    }
    while(cin>>a)
    {
        if(a==0)
            break;
        cout<<ans[a]<<endl;
    }
    return 0;
}
