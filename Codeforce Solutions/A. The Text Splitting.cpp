#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,m,n,loop1,loop2,i,j,large,small,total,x,y,mark=0;
    string s,s1;
    cin>>a>>b>>c>>s;
    m=a%b;
    n=a%c;
    if(a%b==0)
    {
        cout<<a/b<<endl;
        for(i=0; i<a; i=i+b)
        {
            for(j=0; j<b; j++)
            {
                s1+=s[j+i];
            }
            cout<<s1<<endl;
            s1.clear();
        }
    }
    else if(a%c==0)
    {
        cout<<a/c<<endl;
        for(i=0; i<a; i=i+c)
        {
            for(j=0; j<c; j++)
            {
                s1+=s[j+i];
            }
            cout<<s1<<endl;
            s1.clear();
        }
    }
    else
    {
        for(i=0; i*b<=a; i++)
        {
            if((a-(i*b))%c==0)
            {
                x=i;
                y=(a-(i*b))/c;
                mark=1;
            }
        }
        if(mark==1)
        {
            cout<<x+y<<endl;
            for(i=0;i<x*b;i=i+b){

                for(j=0;j<b;j++){
                    s1+=s[i+j];
                }
                cout<<s1<<endl;
                s1.clear();

            }
            for(i=x*b;i<a;i=i+c){

                for(j=0;j<c;j++){
                    s1+=s[i+j];
                }
                cout<<s1<<endl;
                s1.clear();

            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
return 0;
}
