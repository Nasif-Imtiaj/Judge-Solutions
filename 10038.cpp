#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x[4000],y[4000],mark=0,i;

    while(cin>>a){
    for(i=0; i<a; i++)
    {
        cin>>x[i];
    }
    for(i=0; i<a-1; i++)
    {
        y[i]=abs(x[i]-x[i+1]);
    }
    sort(y,y+(a-1));
    for(i=1;i<=a-1;i++)
    {
        if(y[i-1]!=i){
            mark=1;
            break;
        }
    }
    if(mark==0)
    {
        cout<<"Jolly"<<endl;
    }
    else
    {
        cout<<"Not jolly"<<endl;
    }
    mark=0;

    }
    return 0;
}
