#include<bits/stdc++.h>
using namespace std;
struct box{
string s;
}d[10];
int main()
{
    int a,b,c,z=0,x=0,y=0,i;
    string f,check;
    d[0].s="vaporeon";
    d[1].s="jolteon";
    d[2].s="flareon";
    d[3].s="espeon";
    d[4].s="umbreon";
    d[5].s="leafeon";
    d[6].s="glaceon";
    d[7].s="sylveon";
  cin>>a>>f;
if(a==8){
    cout<<"vaporeon"<<endl;
}
else if(a==6){
    cout<<"espeon"<<endl;
}
else
for(i=0;i<8;i++)
   {
       check=d[i].s;
     for(int j=0;j<a;j++)
      {
          if(f[j]==check[j]){
           z++;
       }
       if(f[j]=='.'){
        x++;
       }
      }
       y=a-x;
       if(y==z){
        cout<<d[i].s<<endl;
        break;
       }
       z=0;
       x=0;
   }
return 0;
}
