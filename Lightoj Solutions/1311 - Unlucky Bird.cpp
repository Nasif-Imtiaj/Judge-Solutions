#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
//freopen("output.txt", "w", stdout);
    double v1,v2,v3,a1,a2,d,bird,t1,t2,t;
    int m,n;
    cin>>m;
    for(n=1; n<=m; n++)
    {
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;
        t2=v2/a2;
        t=max(t1,t2);
        d=(v1*t1)-.5*(a1*t1*t1);
      // cout<<d<<endl;
        d+=(v2*t2)-.5*(a2*t2*t2);
        bird=v3*t;
        printf("Case %d: %.9lf %.9lf\n",n,d,bird);
    }
    return 0;
}

