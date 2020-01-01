#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x=0,y=0,z=0,m,n;
    cin>>a>>b;

    for(int i=1; i<=6; i++)
    {
        m=abs(i-a);
        n=abs(i-b);
        if(m==n)
            y++;
        else if(m<n)
            x++;
        else
            z++;
    }
    cout<<x<<" "<<y<<" "<<z<<endl;










}

