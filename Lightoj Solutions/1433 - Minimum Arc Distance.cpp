#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
//freopen("output.txt", "w", stdout);
    int m,n;
    double o1,o2,a1,a2,b1,b2,radius,distance_ab,teta,ans,up,down;
    cin>>m;
    for(n=1; n<=m; n++)
    {
        cin>>o1>>o2>>a1>>a2>>b1>>b2;
        distance_ab=sqrt(pow((a1-b1),2)+pow((a2-b2),2));
        radius=sqrt(pow((a1-o1),2)+pow((a2-o2),2));
        up=(2*(radius*radius))-(distance_ab*distance_ab);
        down=2*radius*radius;
        teta=acos(up/down);
        ans=radius*teta;
        printf("Case %d: %.8f\n",n,ans);
    }





    return 0;
}

