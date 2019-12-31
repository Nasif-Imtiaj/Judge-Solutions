#include<bits/stdc++.h>
using namespace std;
int prime_fact(int a)
{
    int z=0,i;
    while(a%2==0)
    {
        a/=2;
        z++;
    }
    for(i=3; i<=sqrt(a); i+=2)
    {
        while(a%i==0)
        {
            a/=i;
            z++;
        }
    }
    if(a!=1)
        z++;
    return z;
}
struct pipi
{
    int a,b;
} box[2000000];
bool compare(pipi l, pipi r)
{
    if(l.a<r.a)
        return 1;
    if(l.a>r.a)
        return 0;
    if(l.b<r.b)
        return 1;
    if(l.b>r.b)
        return 0;
}
int main()
{
  //  freopen("output.txt", "w", stdout);
    int i,a,j,k,b;
    box[0].a=1;
    box[0].b=1;
    for(i=2; i<=2000000; i++)
    {
        box[i-1].b=i;
        box[i-1].a=prime_fact(i);
    }
   sort(box,box+2000000,compare);
    i=1;
    while(cin>>a)
    {
        if(a==0)
            break;
        printf("Case %d: ",i);
        cout<<box[a-1].b<<endl;
        i++;
    }
    return 0;
}
