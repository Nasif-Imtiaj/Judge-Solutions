#include<bits/stdc++.h>
using namespace std;

struct hello{
string a;
int b;
};
int main()
{
    hello x[1000];
    string temp,check;
    int a,b=0,d,c,z=0;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>x[i].a;
        b=x[i].a.length();
        x[i].b=b;
    }
    for(int m=0;m<a;m++)
    {
        for(int n=0;n<=m;n++){
            if(x[m].b<x[n].b){
                swap(x[m].a,x[n].a);
                swap(x[m].b,x[n].b);
            }
        }
    }
int w=0,l=0;
    for(int i=0;i<a-1;i++)
    {
        c=x[i].b;
        d=x[i+1].b;
        check=x[i].a;
        temp=x[i+1].a;
        for(int j=0;j<d;j++){
            if(temp[j]==check[0])
            for(int k=0;k<c;k++){
             if(temp[j+k]==check[k]){
                w++;
             }
            }
            if(w==c){
                l++;
                break;
             }
             else{
                w=0;
             }
        }
       w=0;
    }
if(a-1==l){
    cout<<"YES"<<endl;
    for(int i=0;i<a;i++){
        cout<<x[i].a<<endl;
    }
}
else
    cout<<"NO"<<endl;
return 0;
}
