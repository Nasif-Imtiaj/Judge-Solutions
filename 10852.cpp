#include<bits/stdc++.h>
using namespace std;
int x[100000];
int main()
{
    int a,b,c,i,j,w=1,y[100000];
    y[0]=2;
    for(i=3; i<=10000; i+=2)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<=10000; j+=i)
            {
                x[j]=1;
            }
        }
        if(x[i]==0)
        {
            y[w]=i;
            w++;
        }
    }
    int highest;
    cin>>a;
    while(a--)
    {
        cin>>b;
           for(i=0; i<w; i++)
        {
            if(y[i]*2>b)
            {
                highest=y[i];
                break;
            }
        }
        cout<<highest<<endl;
    }
    return 0;
}
