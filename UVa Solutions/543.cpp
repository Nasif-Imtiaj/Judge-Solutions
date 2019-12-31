#include<bits/stdc++.h>
using namespace std;
int x[1000000];
int check_prime(int a)
{
    int i,j,mark=0;
    for(i=2;i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            mark=1;
            break;
        }
    }
    return mark;
}
int main()
{
    int i,j,y[100000],l=0;
    for(i=2; i<=1000000; i++)
    {
        if(x[i]==0)
            for(j=i+i; j<=1000000; j=j+i)
            {
                x[j]=1;
            }
    }
    for(i=2; i<=1000000; i++)
    {
        if(x[i]==0 && i%2!=0)
        {
            y[l]=i;
            l++;
        }
    }
    int a,b,c;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        for(i=0; i<l; i++)
        {
            if(y[i]>a)
            {
                break;
            }
            b=a-y[i];
            if(b>2)
            c=check_prime(b);
            if(c==0)
            {
                break;
            }
        }
        if(c==0)
            cout<<a<<" = "<<y[i]<<" + "<<b<<endl;
        else
            cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
