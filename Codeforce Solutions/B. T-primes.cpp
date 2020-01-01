#include<bits/stdc++.h>
using namespace std;
check_prime(int x)
{
    int a,b=0,c,i,j;
    a=sqrt(x);
    for(i=2; i<=a; i++)
    {
        if(x%i==0)
        {
            b++;
        }
    }
    if(b==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    long long int a,b,c,d,e;
    cin>>d;
    while(d--)
    {
        cin>>a;
        if(a==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            b=sqrt(a);
            if(b*b==a)
            {
                c=check_prime(b);
                if(c==1)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
