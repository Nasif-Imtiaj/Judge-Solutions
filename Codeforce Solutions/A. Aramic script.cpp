#include<bits/stdc++.h>
using namespace std;
struct box{
string s,s1;
}d[1005];
int main()
{
    int a,b,c=0,i,j,t[30],k=0,m;
    string val;
    cin>>a;
    for(i=0;i<a;i++)
 {
     fill(t,t+30,0);
     cin>>d[i].s;
     b=d[i].s.length();
     val=d[i].s;
     for(j=0;j<b;j++){
       t[val[j]-97]++;
     }
     for(j=0;j<26;j++){
        if(t[j]>0){
            d[i].s1+=(j+97);
            }
     }
 }
for(i=0;i<a;i++)
{
    m=d[i].s1.length();
     for(j=0;j<a;j++){
        if(j==i){
            continue;
        }
        else{
            if(d[i].s1.compare(d[j].s1)==0 && m>0 ){
                c++;
                d[j].s1.clear();
            }
        }
     }
}
k=a-c;
cout<<k<<endl;
return 0;
}
