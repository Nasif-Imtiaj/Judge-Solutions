#include<bits/stdc++.h>
using namespace std;
int check_prime(long long int a){
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
int sum_of_digit(long long int a)
{
    int z=0,b;
    while(a>0)
    {
        b=a%10;
        a/=10;
        z+=b;
    }
    return z;
}
int prime_fact(long long int a)
{
    int i,z=0;
    while(a%2==0)
    {
        a/=2;
        z+=2;
    }
    for(i=3; i<=sqrt(a); i+=2)
    {
        while(a%i==0)
        {
            a/=i;
            z+=sum_of_digit(i);
        }
    }
    if(a!=1)
        z+=sum_of_digit(a);
    return z;
}
int main()
{
    //freopen("output.txt", "w", stdout);
    long long int a,b,c,d,e,i;
    cin>>d;
    while(d--)
    {
        cin>>a;
        for(i=a+1; i<=1200000000; i++)
        {
            e=check_prime(i);
            if(e==0)
                continue;
            b=prime_fact(i);
            c=sum_of_digit(i);
            if(b==c)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
