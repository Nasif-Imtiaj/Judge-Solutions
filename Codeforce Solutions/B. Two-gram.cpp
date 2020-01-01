#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c,d,i,j,z=0;

string s,s1,result;

map<string,int> m;

cin>>a>>s;

for(i=0;i<=a-2;i++){

    for(j=0;j<2;j++){
      s1+=s[i+j];
    }
    m[s1]++;
    if(m[s1]>z){
        result=s1;
        z=m[s1];
    }
    s1.clear();
}
cout<<result;
return 0;
}
