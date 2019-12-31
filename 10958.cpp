#include<bits/stdc++.h>
using namespace std;

int div(int a){
int b,z=2,i;

for(i=2;i<=sqrt(a);i++)
{
    if(a%i==0){
         z++;
        b=a/i;
        if(b!=i)
            z++;
    }
}

return z;
}


int main()
{
    int a;
    cin>>a;
    cout<<div(a);







}
