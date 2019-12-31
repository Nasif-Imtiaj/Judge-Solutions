#include<bits/stdc++.h>
using namespace std;
int m=0;
struct box
{
    int p,q;
} x[10000];

int p_fact(int a)
{
    int i,z=0;
    if(a%2==0)
    {
        z=0;
        x[m].p=2;
        while(a%2==0)
        {
            a/=2;
            z++;
        }
        x[m].q=z;
        m++;
    }

    for(i=3; i<=sqrt(a); i+=2)
    {
        if(a%i==0)
        {
            z=0;
            x[m].p=i;
            while(a%i==0)
            {
                a/=i;
                z++;
            }
            x[m].q=z;
            m++;
        }
    }
    if(a!=1)
    {
        x[m].p=a;
        x[m].q=1;
        m++;
    }
    return 0;
}
int main()
{
   // freopen("output.txt", "w", stdout);

    int a,b,c,y[10000],l=0,by,bag,track=0,ans=0,i,j=1;
    while(cin>>a>>b)
    {
        if(b==0 || b==1)
        {
            cout<<b<<" divides "<<a<<"!"<<endl;
        }
        else if(a==0 && b==1)
        {
            cout<<b<<" divides "<<a<<"!"<<endl;
        }
        else if(a==0 && b>1)
        {
            cout<<b<<" does not divide "<<a<<"!"<<endl;
        }
        else
        {
            p_fact(b);
            for(i=0; i<m; i++)
            {
                bag=x[i].p;
                track=0;
                by=a;
                while(by>1)
                {
                    by/=bag;
                    if(by==0)
                        break;
                    track+=by;
                }
                y[l]=track/x[i].q;
                l++;
            }
            sort(y,y+l);
            ans=y[0];
            if(ans!=0)
                cout<<b<<" divides "<<a<<"!"<<endl;
            else
            {
                cout<<b<<" does not divide "<<a<<"!"<<endl;
            }
            l=0;
            track=0;
            m=0;
            ans=0;
        }
    }

    return 0;
}
