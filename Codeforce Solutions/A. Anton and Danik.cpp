#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,x=0,y=0;

   string s;

   cin>>b>>s;

   a=s.length();

   for(int i=0;i<a;i++)
   {
       if(s[i]=='A'){
        x++;
       }
       else{
        y++;
       }
   }

   if(x>y){
    cout<<"Anton"<<endl;
   }
   else if(y>x){
    cout<<"Danik"<<endl;
   }
   else{
    cout<<"Friendship"<<endl;
   }





return 0;


}
