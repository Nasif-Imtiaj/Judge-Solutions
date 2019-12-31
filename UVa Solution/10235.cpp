#include<bits/stdc++.h>
using namespace std;

int check_prime(long long int a)
{

    long long int i,z=0;
    for(i=2; i<=sqrt(a); i++)
    {
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
    //freopen("output.txt", "w", stdout);
    int a,b=0,c,x=0;
    while(cin>>a)
    {
        x=check_prime(a);
        if(x==0)
        {
            c=a;
            while(c>0)
            {
                b*=10;
                b+=c%10;
                c/=10;
            }
            x=check_prime(b);
            if(x==0 && a!=b)
                printf("%d is emirp.\n",a);
            else
                printf("%d is prime.\n",a);
        }
        else
        {
            printf("%d is not prime.\n",a);
        }
        b=0;
    }
    return 0;
}
