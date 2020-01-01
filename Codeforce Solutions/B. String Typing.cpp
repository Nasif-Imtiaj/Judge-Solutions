#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,i,j,z=0,mark=0,x=0,y=0;

    string s,s1;

    cin>>a>>s;

    for(i=0; i<a; i++)
    {
        s1+=s[i];
        b=s1.length();
        if(b<a){
            for(j=0;j<b;j++){
                if(s[j+b]==s[j]){
                    z++;
                }
            }
        }
        if(z==b){
            mark=z;
        }
    z=0;
    }
    if(mark!=0)
    x=a-mark+1;
    else{
        x=a;
    }
    cout<<x<<endl;
    return 0;
}
