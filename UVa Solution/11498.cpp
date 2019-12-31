#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d,m,n,i;
  while(cin>>a)
  {
      if(a==0){
        break;
      }
      cin>>b>>c;

      for(i=0;i<a;i++)
      {
          cin>>m>>n;

          if(m==b || n==c){
            cout<<"divisa"<<endl;
          }
          else if(m>b && n>c)
           {
               cout<<"NE"<<endl;

           }
           else if(m<b && n>c){
            cout<<"NO"<<endl;
           }
           else if(m>b && n<c){
            cout<<"SE"<<endl;
           }
           else{
            cout<<"SO"<<endl;
           }
      }
  }
return 0;
}
