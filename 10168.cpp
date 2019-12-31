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
int x[10000000];
void sieve()
{
    for(int i=2; i<=10000000; i++)
    {
        if(x[i]==0)
            for(int j=i+i; j<=10000000; j+=i)
                x[j]=1;

    }
}
void gold(int a)
{
   for(int i=2;i<a;i++)
   {
       if(x[i]==0 && x[a-i]==0)
       {
           cout<<i<<" "<<a-i<<" ";
           return;
       }
   }
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c;
   sieve();
    while(cin>>a)
    {
        if(a<8)
            cout<<"Impossible."<<endl;
        else if(a%2==0)
        {
            gold(a-4);
            cout<<"2 2"<<endl;
        }
        else
        {
            gold(a-5);
            cout<<"2 3"<<endl;
        }
    }
    return 0;
}
