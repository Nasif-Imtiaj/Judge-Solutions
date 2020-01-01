#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,e,d,z=0,y=1,w=0,t=0,x[1000],k;

    memset(x,0,1000);

    string s,s1;

    cin>>a>>b;
    c=a;
    while(a--)
    {
        cin>>s;
        e=s.length();
        x[e]++;
    }
    cin>>s1;
    d=s1.length();
    for(int i=1; i<=d; i++)
    {
        if(x[i]>0)
        {
            z+=x[i];
        }
    }
w+=z;
while(1){
    z=z-b;
    if(z<=0){
        break;
    }
    w+=5;
}
    for(int j=1; j<d; j++)
    {
        if(x[j]>0)
        {
            y+=x[j];
        }
    }
t+=y;
while(1){
    y=y-b;
    if(y<=0){
        break;
    }
    t+=5;
}
    cout<<t<<" "<<w<<endl;
    return 0;
}
