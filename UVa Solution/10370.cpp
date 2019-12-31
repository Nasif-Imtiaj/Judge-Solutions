#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x[10000],i,j;
    double y,z,t,w=0,total=0;
    cin>>d;
    for(i=0;i<d;i++)
    {
        cin>>a;
        for(j=0;j<a;j++)
        {
            cin>>x[j];
            total+=x[j];
        }
        total=total/a;
        for(j=0;j<a;j++)
        {
            if(x[j]>total){
                w++;
            }
        }
        y=(w/a)*100;

        cout<<setprecision(3)<<fixed<<y<<"%"<<endl;
        w=0;
        total=0;
    }
return 0;
}
