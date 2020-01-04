#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
double tri(int x1,int y1,int x2,int y2,int x3,int y3)
{
    double m,n;
    m=(double)abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)))/2;
    return m;
}
int main()
{
    int a1,a2,b1,b2,c1,c2,d1,d2,area,g,i;
    double x,y,z,w,m,n;
    cin>>g;
    for(i=1; i<=g; i++)
    {
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        x=(double)(a1+c1)/2;
        y=(double)(a2+c2)/2;
        d1=(x*2)-b1;
        d2=(y*2)-b2;
        m=tri(a1,a2,d1,d2,c1,c2);
        n=tri(a1,a2,b1,b2,c1,c2);
        z=m+n;
        area=z;
        printf("Case %d: %d %d %d\n",i,d1,d2,area);
    }
    return 0;
}
