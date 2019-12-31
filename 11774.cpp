#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt", "w", stdout);
    unsigned long long int a,b,c,d,i;
    cin>>c;
    for(i=1; i<=c; i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<"Case "<<i<<": "<<a<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<a+b<<endl;
        }
    }
    return 0;
}
