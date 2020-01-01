#include<bits/stdc++.h>
using namespace std;
struct box
{
    string s;
} d[10];
int main()
{
    int a,b,c,i,j,t[5],z=0;

    string g;

    for(i=0; i<8; i++)
    {
        cin>>d[i].s;
    }
for(i=0;i<8-1;i++){

if(d[i].s.compare(d[i+1].s)==0){
    z=1;
    break;
}
}
if(z==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


return 0;
}
