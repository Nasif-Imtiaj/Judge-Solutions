#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d;

    cin>>a;

    if(a%3==0){
      b=a-2;
      c=1;
      d=1;
    }
    else{
      b=a-3;
      c=2;
      d=1;
    }

    cout<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}
