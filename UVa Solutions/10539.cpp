#include<bits/stdc++.h>
using namespace std;
int x[10000000];
long long int y[10000000];
int main()
{
    long long int a,b,c,cur,mark=0,i,start,l=0,j,z=0,note=0;
    for(i=2; i<=10000000; i++)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<=10000000; j+=i)
            {
                x[j]=1;
            }
        }
        if(x[i]==0)
        {
            y[l]=i;
            l++;
        }
    }
    y[0]=2;
    cin>>c;
    while(c--)
    {
        cin>>a>>b;
        for(i=0; i<l; i++)
        {
            cur=y[i];
            while(cur*y[i]<=b)
            {
                mark=1;
                cur*=y[i];
                if(cur>=a && cur<=b){
                    z++;
                }
            }
            if(mark==0)
            {
                break;
            }
            mark=0;
        }
        cout<<z<<endl;
        z=0;
       note=0;
        mark=0;
    }
    return 0;
}
