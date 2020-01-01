#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b,a,c,h,z=0,ans=19,check=0;
        cin>>b;
        for(int i=2; i<=b; i++)
        {
            ans+=9;
            c=ans;
            while(1)
            {
                if(c==0)
                {
                    break;
                }
                z+=c%10;
                c=c/10;
            }
            if(z!=10)
            {
                i--;
            }
            z=0;
        }
        cout<<ans<<endl;
    return 0;
}
