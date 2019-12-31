#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i,j,ans=0,div=1;

    while(cin>>a)
    {

        for(i=a+1; i<=a+a; i++)
        {
            b=a*i;
            c=b/div;
            if(c*div==b)
                ans++;
            div++;
        }
        cout<<ans<<endl;
        div=1;
        for(i=a+1; i<=a+a; i++)
        {
            b=a*i;
            c=b/div;
            cout<<c<<endl;
            if(c*div==b)
            {
                printf("1/%lld = 1/%lld + 1/%lld\n",a,c,i);
            }
            div++;
        }
        div=1;
        ans=0;
    }

    return 0;
}
