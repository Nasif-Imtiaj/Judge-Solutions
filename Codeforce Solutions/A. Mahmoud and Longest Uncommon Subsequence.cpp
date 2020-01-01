#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,x=0,y=0;
    string s,s1;

    cin>>s>>s1;

    a=s.length();
    b=s1.length();

    if(a<b){
        swap(a,b);
        swap(s,s1);
    }
        for(i=0;i<=a-b;i++){
            for(j=0;j<b;j++){
                if(s[i+j]==s1[j]){
                    x++;
                }
            }
            if(x>y){
                y=x;
            }
            x=0;
        }
        if(y==a){
            c=a-y;
        }
        else{
            c=a;
        }
        if(c==0){
            c=-1;
        }
cout<<c<<endl;
return 0;
}
