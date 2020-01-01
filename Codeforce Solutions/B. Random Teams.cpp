#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int a,b,c,d,e,maxx,minn,m,n,o,p,x,y;

    cin>>a>>b;

    if(a%b==0)
    {
        c=a/b;
        c--;
        d=(c*(c+1))/2;
        minn=d*b;
    }
    else{
     c=a/b;
     x=a%b;
     y=b-x;
     o=c+1;
     c--;
     o--;
     c=c*(c+1)/2;
     o=o*(o+1)/2;
     minn=abs(c*y+o*x);
    }
    m=b-1;
    a=a-m;
    a--;
    maxx=a*(a+1)/2;
 cout<<minn<<" "<<maxx<<endl;
return 0;
}
