#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("output.txt", "w", stdout);
    long long int a,b,c,d,i,x,y,flg=0,z,run;
    cin>>d;
    while(d--)
    {
        cin>>a>>c;
        run=max(a,c);
        run=sqrt(run);
        for(i=1; i<=run; i++)
        {
            x=__gcd(a,i);
            y=a*i;
            z=y/x;
            if(y/x==c)
            {
                cout<<i<<endl;

                flg=1;
                break;
            }
        }
        if(flg==0)
            cout<<"NO SOLUTION"<<endl;
        flg=0;
    }
    return 0;
}
