#include<bits/stdc++.h>
using namespace std;
int x[1000000];
int main()
{
    int i,j,y[100000],k=0,note,note2,z=0;
    for(i=2; i<=100000; i++)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<=100000; j=j+i)
            {
                x[j]=1;
            }
        }
        if(x[i]==0)
        {
            y[k]=i;
            k++;
        }
    }

    int a,b,c,d;

    while(cin>>a)
    {
        if(a==0)
            break;

        for(i=0; i<k; i++)
        {
            if(y[i]>=a)
            {
                note=i;
                break;
            }
        }
        for(i=0; i<=note; i++)
        {
            if(y[i]+y[i]==a)
            {
                z++;
            }
            else
                for(j=i+1; j<=note; j++)
                {
                    if(y[i]+y[j]==a)
                    {
                        z++;
                        break;
                    }
                }
        }
        cout<<z<<endl;
        z=0;
    }
    return 0;
}
