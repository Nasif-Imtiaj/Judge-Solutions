#include<bits/stdc++.h>
using namespace std;
long long int A,B,C,D;
int div(long long int a)
{
    int i,b,note=1;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0 && note==1)
        {
            A=i;
            B=a/i;
            note--;
            continue;
        }
        if(a%i==0)
        {
            C=i;
            D=a/i;
            break;
        }
    }
    return 0;
}
int main()
{
    long long int x,i,y;
    cin>>y;
    for(i=1; i<=y; i++)
    {
        cin>>x;
        div(x);
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",i,x,A,B,C,D);
    }
    return 0;
}
