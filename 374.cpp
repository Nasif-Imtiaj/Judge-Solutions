#include<bits/stdc++.h>
using namespace std;
long long int BG(long long int a,long long int b,long long int m)
{
    if(b==0)
        return 1%m;
    long long int x=BG(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;
}
int main()
{
    //freopen("output.txt", "w", stdout);
    long long int a,b,c,e;

    while(cin>>a>>b>>c)
    {

        e=BG(a,b,c);

        cout<<e<<endl;
    }
    return 0;
}
