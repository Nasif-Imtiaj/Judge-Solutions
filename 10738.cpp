#include<bits/stdc++.h>
using namespace std;
int x[1000010],y[1000010];
int z;
long long int PD(long long int a)
{
    int note=1,i,j,track=0;
    z=0;
    while(a%2==0)
    {
        a/=2;
        if(note>0)
        {
            track++;
            note--;
        }
        z++;
    }
    for(i=3; i<=sqrt(a); i+=2)
    {
        note=1;
        while(a%i==0)
        {
            a/=i;
            if(note>0)
            {
                note--;
                track++;
            }
            z++;
        }
    }
    if(a!=1)
    {
        track++;
        z++;
    }
    return track;
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int i,j,a,b,c,digit=0,temp;
    x[1]=1;
    y[1]=1;
    for(i=2; i<=1000000; i++)
    {
        b=PD(i);
        if(z>b)
        {
            x[i]=0;
            y[i]+=x[i]+y[i-1];
        }
        else
        {
            if(b%2==0)
            {
                x[i]=1;
                y[i]+=x[i]+y[i-1];
            }
            else
            {
                x[i]=-1;
                y[i]+=x[i]+y[i-1];
            }
        }
    }
    while(cin>>a)
    {
        if(a==0)
        break;

        temp=a;
        digit=0;
        while(temp>0){
            temp/=10;
            digit++;
        }
        for(i=0;i<8-digit;i++)
        cout<<" ";
        cout<<a;

        temp=x[a];
        digit=0;
        if(x[a]<=0){
         digit++;
         temp*=-1;
        }
        while(temp>0){
            temp/=10;
            digit++;
        }
        for(i=0;i<8-digit;i++)
        cout<<" ";
        cout<<x[a];

        temp=y[a];
        digit=0;
        if(y[a]<=0){
         digit++;
         temp*=-1;
        }
        while(temp>0){
            temp/=10;
            digit++;
        }
        for(i=0;i<8-digit;i++)
        cout<<" ";
        cout<<y[a]<<endl;
    }
    return 0;
}
