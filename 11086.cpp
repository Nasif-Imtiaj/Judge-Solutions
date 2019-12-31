#include<bits/stdc++.h>
using namespace std;
int check_prime(int a)
{
    int z=0,i,b,c,y=0,k;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            z++;
            b=i;
            c=a/i;
            k=check_prime(b);
            if(k==0)
                y++;
            k=check_prime(c);
            if(k==0)
                y++;
            return y;
        }
    }
    return z;
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int a,b,c,x=0;
    while(cin>>c)
    {
        while(c--)
        {
            cin>>a;
            b=check_prime(a);
            if(b==2)
                x++;
        }
        cout<<x<<endl;
        x=0;
    }
    return 0;
}
