#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i=1;

    double x,y,z;

    cin>>c;
    while(c--)
    {
        cin>>a>>b;
        x=(((9*(double)a)/5)+32);
        x+=(double)b;
        y=((x-32)*5)/9;
        cout<<"Case "<<i<<": "<<setprecision(2)<<fixed<<y<<endl;
        i++;
    }

    return 0;
}
