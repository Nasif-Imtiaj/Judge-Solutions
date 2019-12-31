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
int b1=0,b2=0;
int arr[10];
void make_bin(int a)
{
    while(a>0)
    {
        if(a%2==1)
            b1++;
        a/=2;
    }
}
void make_hex(int a)
{
    int b;
    while(a>0)
    {
        b=a%10;
        a/=10;
        b2+=arr[b];
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    arr[1]=1;
    arr[2]=1;
    arr[3]=2;
    arr[4]=1;
    arr[5]=2;
    arr[6]=2;
    arr[7]=3;
    arr[8]=1;
    arr[9]=2;
    int a,b,c;
    cin>>b;
    while(b--)
    {
        cin>>a;
        make_bin(a);
        make_hex(a);
        cout<<b1<<" "<<b2<<endl;
        b1=0;
        b2=0;
    }
    return 0;
}
