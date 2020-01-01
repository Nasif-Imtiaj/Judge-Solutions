#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,x=-1,y=-1,z=-1,t[100009],flag=0;
    double m,n;
    cin>>a;
    b=a+5;
    fill(t,t+b,0);
    for(i=0; i<a; i++)
    {
        cin>>t[i];
    }
    sort(t,t+a);
    for(i=0; i<a; i++)
    {
        x=t[i];
        y=t[i+1];
        z=t[i+2];
        m=((double)x+(double)y+(double)z)/2;
        if(m>z && z!=0)
        {
            flag=1;
            break;
        }
        x=t[i+1];
        y=t[i+3];
        z=t[i+5];
        m=((double)x+(double)y+(double)z)/2;
        if(m>z && z!=0)
        {
            flag=1;
            break;
        }
        x=t[i+2];
        y=t[i+4];
        z=t[i+6];
        m=((double)x+(double)y+(double)z)/2;
        if(m>z && z!=0)
        {
            flag=1;
            break;
        }
        x=t[i+2];
        y=t[i+3];
        z=t[i+4];
        m=((double)x+(double)y+(double)z)/2;
        if(m>z && z!=0){
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
