#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d=1;

    cin>>a>>b;

    if(a<b){
        swap(a,b);
    }
    while(b>0)
    {
        d*=b;
        b--;
    }
  cout<<d<<endl;
return 0;
}
