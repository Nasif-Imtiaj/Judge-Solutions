#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c=0,d,i;

    cin>>a;

    b=a/2;
    if(a%2!=0)
    {
        c=1;
        b--;
        d=b+c;
    }
    else
    {
        d=b;
    }
    cout<<d<<endl;
    for(i=0; i<b; i++)
    {
        cout<<"2"<<" ";
    }
    for(i=0; i<c; i++)
    {
        cout<<"3"<<" ";
    }
    cout<<endl;
    return 0;
}
