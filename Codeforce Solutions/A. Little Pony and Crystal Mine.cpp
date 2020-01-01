#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j;

    cin>>a;
    b=a;
    c=1;
    for(i=0; i<a/2; i++)
    {
        for(j=0; j<b/2; j++)
        {
            cout<<"*";
        }
        for(j=0; j<c; j++)
        {
            cout<<"D";
        }
        for(j=0; j<b/2; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        b-=2;
        c=c+2;
    }
    for(i=0; i<a; i++)
    {
        cout<<"D";
    }
    cout<<endl;
    b=2;
    c=a-2;
    for(i=0; i<a/2; i++)
    {
        for(j=0; j<b/2; j++)
        {
            cout<<"*";
        }
        for(j=0; j<c; j++)
        {
            cout<<"D";
        }
        for(j=0; j<b/2; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        b+=2;
        c=c-2;
    }
    return 0;
}
