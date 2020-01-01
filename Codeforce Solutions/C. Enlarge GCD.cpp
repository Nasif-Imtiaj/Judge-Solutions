#include<bits/stdc++.h>
using namespace std;
long long int x[10000000];
int main()
{
    long long int a,b,c,d,inigcd=0,i,g,del=1,mark=0;
    cin>>a;
    for(i=0; i<a; i++)
        cin>>x[i];
    sort(x,x+a);

    for(i=0; i<a-1; i++)
    {
        if(i==0)
        {
            inigcd=__gcd(x[i],x[i+1]);
        }
        else
        {
            g=__gcd(x[i],x[i+1]);
            if(g>=inigcd)
            {
                mark=1;
                break;
            }
            else
                del++;
        }
    }
    cout<<del<<endl;


    return 0;
}
