#include<bits/stdc++.h>
using namespace std;
int prime[100000];
int x[1000000];
int check_prime(int a)
{
    int i,z=0;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)
            z++;
    }
    return z;
}
int check_div(int a)
{
    int z=0,i,b;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            z++;
            b=a/i;
            if(b!=i)
                z++;
        }
    }
    z+=2;
    return z;
}
int main()
{
    // freopen("output.txt", "w", stdout);
    int i,k=2,h,j,d,f;
    for(i=4; i<= 10000; i++)
    {
        d=check_div(i);
        f=check_prime(d);
        if(f==0)
        {
            x[k]=i;
            k++;
        }
    }
    x[0]=2;
    x[1]=3;

    //cout<<x[7]<<endl;
    int a,b,c,note=0,p=0;
    cin>>c;
    while(c--)
    {
        int first=0;
        cin>>a>>b;
        if(a>b)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(i=0; i<k; i++)
            {
                if(x[i]>=a && x[i]<=b && first==0)
                {
                    cout<<x[i];
                    first=1;
                    note=1;
                }
                else if(x[i]<=b && first==1)
                {
                    cout<<" "<<x[i];
                }

            }
            if(first==1)
                cout<<endl;
            if(note==0)
                cout<<"-1"<<endl;
            note=0;
            first=0;
        }
    }
    return 0;
}
