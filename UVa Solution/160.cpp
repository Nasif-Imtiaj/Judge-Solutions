#include<bits/stdc++.h>
using namespace std;
int x[1000000];
int main()
{
   // freopen("output.txt", "w", stdout);
    int i,j,w=0,y[100000],z[10000],p[1000];
    for(i=2; i<=100000; i++)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<=100000; j+=i)
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
    int a,b,c,d,start=0,highest=0,mark=0;
    while(cin>>a)
    {
        if(a==0)
            break;
        fill(p,p+100,0);
        for(i=1; i<=a; i++)
        {
            z[i]=i;
        }
        for(j=0; j<100; j++)
        {
            for(i=1; i<=a; i++)
            {
                while(z[i]%y[j]==0)
                {
                    z[i]/=y[j];
                    p[j]++;
                    highest=y[j];
                }
            }
        }
       if(a<10)
        cout<<"  ";
      else if(a<100)
        cout<<" ";
 cout<<a<<"! =";
        for(i=0; i<100; i++)
        {
            if(mark==15){
                    cout<<endl;
                cout<<"      ";
                mark=0;
            }
            if(p[i]<10)
              cout<<"  ";
            else if(p[i]<100)
                cout<<" ";
            cout<<p[i];
            if(y[i]==highest)
            {
                break;
            }
            mark++;
        }
        mark=0;
        cout<<endl;
    }
    return 0;
}
