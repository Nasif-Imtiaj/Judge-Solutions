#include<bits/stdc++.h>
using namespace std;
int divide_check(string s,int a,int b)
{
    int i,j,x=0,mark=0;
    double z=0,y;
    for(i=0; i<a; i++)
    {
        z+=s[i]-48;
    }
    z=z/b;
    y=ceil(z);
    z=y;
    for(i=0; i<a; i++)
    {
        x+=s[i]-48;
        if(x==z){
            mark++;
        x=0;
        }
    }
    if(mark==b)
        return 1;
    else
        return 0;
}

int main()
{
    int a,b,c=0,z=0,high=0,i,mark=0,mark1=0,x=0,y=0,w=0;
    string s;

    cin>>a>>s;

    for(i=2; i<=100; i++)
    {
        c=divide_check(s,a,i);
        if(c==1)
            break;
    }
    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
