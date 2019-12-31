#include<bits/stdc++.h>
using namespace std;

unsigned long long int phi(unsigned long long int a){

unsigned long long int ret,i;
ret=a;

for(i=2;i*i<=a;i++){
    if(a%i==0){
        while(a%i==0){
            a/=i;
        }
        ret-=ret/i;
    }
}
if(a>1)
    ret-=ret/a;



return ret;
}

int main()
{
   // freopen("output.txt", "w", stdout);
   unsigned long long int a,b,c;
    while(cin>>a){

    if(a==0)
    break;
    b=phi(a);
   if(a==1)
    b=0;
    cout<<b<<endl;
    }
return 0;
}
