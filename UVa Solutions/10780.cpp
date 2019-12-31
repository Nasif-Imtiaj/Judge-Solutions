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
    cin>>c;
    for(j=1; j<=c; j++)
    {

        cin>>a>>b;
        p_fact(a);
        for(i=0; i<m; i++)
        {
            bag=x[i].p;
            track=0;
            by=b;
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
        printf("Case %d:\n",j);
        if(ans!=0)
            cout<<ans<<endl;
        else
        {
            printf("Impossible to divide\n");
        }
        l=0;
        track=0;
        m=0;
        ans=0;
    }

    return 0;
}
