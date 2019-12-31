#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int x=0;
string s;
void add(int a,int b)
{

    s+=a+48;
    s+=b+48;
}
ll make(ll a)
{
    int b,c;
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    add(b,c);
    return a;
}
void again(ll a)
{
    int b;
    s+=" atahs ";

    b=a%10;
    s+=b+48;
    a/=10;
    if(a==0)
        return;
    s+=" rajah ";
    a=make(a);
    if(a==0)
        return;
    s+=" hkal ";
    a=make(a);
    if(a==0)
        return;
    s+=" ituk ";
    a=make(a);
    if(a==0)
        return;
}
void bangla_converter(ll a)
{
    int b;
    a=make(a);
    if(a==0)
        return;
    s+=" atahs ";

    b=a%10;
    s+=b+48;
    a/=10;
    if(a==0)
        return;
    s+=" rajah ";
    a=make(a);
    if(a==0)
        return;
    s+=" hkal ";
    a=make(a);
    if(a==0)
        return;
    s+=" ituk ";
    a=make(a);
    if(a==0)
        return;
    again(a);
}

int main()
{
freopen("output.txt", "w", stdout);

    ll a,i=1;
    while(cin>>a)
    {
        bangla_converter(a);
        if(i<10) cout<<"   ";
        else if(i<100) cout<<"  ";
        else if(i<1000)cout<<" ";
        cout<<i<<". ";
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        s.clear();
        x=0;
        i++;
    }











    return 0;
}
