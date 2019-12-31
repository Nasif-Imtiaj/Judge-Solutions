#include<bits/stdc++.h>
using namespace std;
int phi[2000006],mark[2000006];
int SODF[2000006];
int ans[2000006];
int main()
{
    //freopen("output.txt", "w", stdout);
    int i,j,z=0,x=0,y;
     int a,b,c,d,e;
    for(i=1; i<=2000000; i++)
        phi[i]=i;
    phi[1]=1;
    mark[1]=1;
    for(i=2; i<=2000000; i++)
    {
        if(!mark[i])
        {
            for(j=i; j<= 2000000; j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
    for(i=2; i<=2000000; i++)
        {
            c=i;
            z=0;
            while(c!=1)
            {
                d=phi[c];
                c=d;
                z++;
            }
            x+=z;
            SODF[i]=z;
            ans[i]=x;
        }

    cin>>e;
    while(e--)
    {
        cin>>a>>b;
        y=ans[b]-ans[a-1];
        cout<<y<<endl;
    }
    return 0;
}
