#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,z=1080,x,y,w,les,high;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 && d==0)
        {
            break;
        }
        if(a<b){
            x=(a+40)-b;
        }
        else{
            x=a-b;
        }
        x=x*9;
        // cout<<x<<endl;
        z+=x;
        if(c>b){
            x=c-b;
        }
        else{
            x=(c+40)-b;
        }
        x=x*9;
        // cout<<x<<endl;
        z+=x;
        if(d<c){
           x=c-d;
        }
        else{
            x=(c+40)-d;
        }
        x=x*9;
        z+=x;
     cout<<z<<endl;
     z=1080;
    }
return 0;
}
