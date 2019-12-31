#include<bits/stdc++.h>
using namespace std;
int x[10000000],y[1000000];
long long int prime(long long int a){
int i,z=0;
for(i=2;i<=sqrt(a);i++){
    if(a%i==0){
        z++;
        break;
    }
}
return z;
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int i,j,w=1;
    y[0]=2;
    for(i=3; i<=1000000; i+=2)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<=1000000; j+=i)
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
    //cout<<w<<endl;

    int a,b,c,highest=0,mark=0,m,check;

    while(cin>>a)
    {
        if(a==0)
            break;
        for(i=0; i<w; i++)
        {
            if(y[i]<a)
            {
                highest=i;
            }
            else
                break;
        }
        for(i=0;i<=highest/2;i++)
        {
            b=a-y[i];
            check=prime(b);
            if(check==0)
            {
                cout<<a<<":"<<endl;
                cout<<y[i]<<"+"<<b<<endl;
                mark=1;
                break;
            }
        }
        if(mark==0){
                cout<<a<<":"<<endl;
            cout<<"NO WAY!"<<endl;
        }
        mark=0;
    }

    return 0;
}

