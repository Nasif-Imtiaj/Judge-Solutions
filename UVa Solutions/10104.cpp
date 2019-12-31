#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int pos=0;
struct ans
{
    int x,y,z,s;
} ok[2000];
bool com(ans l,ans r)
{
    if(l.z<r.z)
        return 0;
    if(l.z>r.z)
        return 1;
    if(l.s>r.s)
        return 0;
    if(l.s<r.s)
        return 1;
}
long long int egcd(long long int a,long long int b,long long int &m,long long int &n)
{
    if(a==0)
    {
        m=0;
        n=1;
        ok[pos].x=m;
        ok[pos].y=n;
        ok[pos].z=m+n;
        if(m<n)
            ok[pos].s=0;
        else
            ok[pos].s=1;
        pos++;
        return b;
    }
    long long int x1,y1;
    long long int d=egcd(b%a,a,x1,y1);
    m=y1-(b/a)*x1;
    n=x1;
    ok[pos].x=m;
    ok[pos].y=n;
    ok[pos].z=abs(m)+abs(n);
    if(m<n)
        ok[pos].s=0;
    else
        ok[pos].s=1;
    pos++;
    return d;
}
int main()
{
//freopen("output.txt", "w", stdout);


    long long int a,b,c,m,n,g,i,x,y;
    while(cin>>a>>b)
    {
        pos=0;
        g=__gcd(a,b);
        egcd(a,b,m,n);
        for(i=0; i<pos; i++)
            cout<<ok[i].x<<" "<<ok[i].y<<" "<<ok[i].z<<" "<<ok[i].s<<endl;
        sort(ok,ok+pos,com);
        for(i=0; i<pos; i++)
            cout<<ok[i].x<<" "<<ok[i].y<<" "<<ok[i].z<<" "<<ok[i].s<<endl;
        x=ok[0].x;
        y=ok[0].y;
        cout<<x<<" "<<y<<" "<<g<<endl;
    }
    return 0;
}
