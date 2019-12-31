#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a,long long int b){

if(a%b==0)
return b;
return gcd(b,(a%b));
}
int main()
{
    long long int a,b,c,d,e,big,small,G,L;
    cin>>c;
    while(c--)
    {cin>>a>>b;
     d=gcd(a,b);
     if(d==a){
        e=(a*b)/d;
        if(e==b){
            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
     }
     else{
        cout<<"-1"<<endl;
     }
    }
    return 0;
}
