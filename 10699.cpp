#include<bits/stdc++.h>
using namespace std;
long long int PD(long long int a){
int note=1,i,j,z=0,track=0;
while(a%2==0)
{
    a/=2;
    if(note>0){
        track++;
        note--;
    }
}
for(i=3;i<=sqrt(a);i+=2){
    note=1;
    while(a%i==0){
        a/=i;
        if(note>0){
            note--;
            track++;
        }
    }
}
if(a!=1)
track++;
return track;
}
int main()
{
   long long int a;

   while(cin>>a)
   {
       if(a==0){
        break;
       }
       cout<<a<<" : "<<PD(a)<<endl;
   }
return 0;
}
