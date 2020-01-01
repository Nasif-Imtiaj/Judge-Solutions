#include<bits/stdc++.h>
using namespace std;
double area(int x1,int y1, int x2, int y2, int x3, int y3)
{
    return abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0);
}
int main()
{
    int a,b,c,x1,y1,x2,y2,x3,y3,x4,y4,x,y,w,z;
    double A,A1,A2,A3,A4;
    cin>>a>>b;
    x1=0;
    y1=b;
    x2=b;
    y2=0;
    x3=a;
    y3=a-b;
    x4=a-b;
    y4=a;
    cin>>c;
    while(c--)
    {
        cin>>x>>y;
        A=area(x1,y1,x2,y2,x3,y3)+area(x1,y1,x3,y3,x4,y4);
        A1=area(x,y,x1,y1,x2,y2);
        A2=area(x,y,x2,y2,x3,y3);
        A3=area(x,y,x3,y3,x4,y4);
        A4=area(x,y,x1,y1,x4,y4);

        if(A==A1+A2+A3+A4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
