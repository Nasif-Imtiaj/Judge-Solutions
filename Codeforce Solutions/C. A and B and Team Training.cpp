#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,e;

    cin>>a>>b;

    c=a+b;
    c=c/3;

    if(c<=a && c<=b){
        cout<<c<<endl;
    }
    else if(c>b){
            cout<<b<<endl;
    }
    else if(c>a){
         cout<<a<<endl;
    }
return 0;
}
