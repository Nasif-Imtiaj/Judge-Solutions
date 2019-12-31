#include<bits/stdc++.h>
using namespace std;
long long int x[1000000],w=0;

long long primediv(long long int a){

   int i,j,w=0;

   while(a%2==0){
    a/=2;
    x[w]=2;
    w++;
   }
   for(i=3;i<=sqrt(a);i+=2)
     {
         while(a%i==0){
            a/=i;
            x[w]=i;
            w++;
         }
     }
     if(a!=1){
        x[w]=a;
        w++;
     }
return w;
}


int main()
{

   long long int a,b,c,i;
    while(cin>>a){
        if(a==0){
            break;
        }
        if(a<0){
            cout<<a<<" = -1 x ";
            a=a*-1;
        }
        else{
            cout<<a<<" = ";
        }
        b=primediv(a);
        for(i=0;i<b-1;i++){
            cout<<x[i]<<" x ";
        }
        cout<<x[b-1]<<endl;;
    }
return 0;
}
