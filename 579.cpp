#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    double clcwise,anticlcwise,p,q,m,n,w;
    char x;
    while(cin>>a>>x>>b)
    {
        if(a==0 && b==0)
        {
            break;
        }
        m=a*30+b*.5;
        n=b*6;
        p=abs(m-n);
        if(p>180){
            p=360-p;
        }
            cout<<setprecision(3)<<fixed<<p<<endl;
    }
    return 0;
}
