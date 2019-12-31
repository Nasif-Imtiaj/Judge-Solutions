#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x[10000],i,j,z=0,maxx=0,minn=10000000,ans=0;

    cin>>b;
    while(b--)
    {
        cin>>a;
        for(i=0; i<a; i++)
        {
            cin>>x[i];
        }
        sort(x,x+a);
        a--;
        for(i=0;i<a;i++,a--){
            ans+=abs(x[i]-x[a]);
        }
        cout<<ans<<endl;
        ans=0;
    }
    return  0;
}
