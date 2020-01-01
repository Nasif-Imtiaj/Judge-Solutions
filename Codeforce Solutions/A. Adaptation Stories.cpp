#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,z=0,ans=0;

    cin>>a;

    while(a--)
    {
        cin>>b;
        z+=b;
        if(z<0)
        {
            ans+=z;
            z=0;
        }
    }
    ans*=-1;
    cout<<ans<<endl;
    return 0;
}
