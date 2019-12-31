#include<iostream>
using namespace std;
int x[20000005];
int y[1370607];
int w=0,m=0;
struct box
{
    int p,q;

} h[100002];
int main()
{
    int i,j,k;
    for(i=3; i<=20000000; i+=2)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<=20000000; j+=i)
            {
                x[j]=1;
            }
            y[w]=i;
            w++;
        }
    }
    //cout<<w<<endl;
    for(i=0; i<w-1; i++)
    {
        if(y[i+1]-y[i]==2)
        {
            h[m].p=y[i];
            h[m].q=y[i+1];
            m++;
        }
        if(m==100000){
            break;
        }
    }
        // cout<<w<<endl;

        int a,b,c,num=0;
        while(cin>>a)
        {
            cout<<"("<<h[a-1].p<<", "<<h[a-1].q<<")"<<endl;
        }
        return 0;
    }
