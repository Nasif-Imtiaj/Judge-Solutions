#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,i,z=0;
    cin>>a>>b;
    for(i=1; i<=a; i++)
    {
        if(b%i==0 && b<=i*a)
        {
            z++;
        }
    }
    cout<<z<<endl;
    return 0;
}
