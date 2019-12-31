#include<iostream>
using namespace std;
int x[20000002];
int y[1370607];
int w=1,m=0;
int main()
{
  //  freopen("output.txt", "w", stdout);
    y[0]=2;
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
    // cout<<w<<endl;
    int a,b,c,num=0,z[100000],start=0,finish=0,winner=0,highest=0,same=0;
    cin>>c;
    while(c--)
    {
        cin>>a>>b;
        fill(z,z+100000,0);
        for(i=0; i<w; i++)
        {
            if(y[i]>=a)
            {
                start=i;
                break;
            }
        }
        for(i=0; i<w; i++)
        {
            if(y[i]<=b)
            {
                finish=i;
            }
            else
                break;
        }
        for(i=start; i<finish; i++)
        {
            z[y[i+1]-y[i]]++;
        }
        for(i=0; i<=10000; i++)
        {
            if(z[i]>highest)
            {
                highest=z[i];
                winner=i;
                same=0;
            }
            else if(z[i]==highest){
                same++;
            }
        }
        if(highest>0 && same==0)
            cout<<"The jumping champion is "<<winner<<endl;
        else
        {
            cout<<"No jumping champion"<<endl;
        }
        highest=0;
        winner=0;
        same=0;
        start=0;
        finish=0;
    }
    return 0;
}#include<iostream>
using namespace std;
int x[20000002];
int y[1370607];
int w=1,m=0;
int main()
{
  //  freopen("output.txt", "w", stdout);
    y[0]=2;
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
    // cout<<w<<endl;
    int a,b,c,num=0,z[100000],start=0,finish=0,winner=0,highest=0,same=0;
    cin>>c;
    while(c--)
    {
        cin>>a>>b;
        fill(z,z+100000,0);
        for(i=0; i<w; i++)
        {
            if(y[i]>=a)
            {
                start=i;
                break;
            }
        }
        for(i=0; i<w; i++)
        {
            if(y[i]<=b)
            {
                finish=i;
            }
            else
                break;
        }
        for(i=start; i<finish; i++)
        {
            z[y[i+1]-y[i]]++;
        }
        for(i=0; i<=10000; i++)
        {
            if(z[i]>highest)
            {
                highest=z[i];
                winner=i;
                same=0;
            }
            else if(z[i]==highest){
                same++;
            }
        }
        if(highest>0 && same==0)
            cout<<"The jumping champion is "<<winner<<endl;
        else
        {
            cout<<"No jumping champion"<<endl;
        }
        highest=0;
        winner=0;
        same=0;
        start=0;
        finish=0;
    }
    return 0;
}
