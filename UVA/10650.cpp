#include<bits/stdc++.h>
using namespace std;
int temp[1000000];
int prime[100000];
int pos=1;
int sub=0;
struct hi
{
    int a,x[6];
} box[1000];
int main()
{
    int i,j,k;
    prime[0]=2;
    for(i=3; i<=100000; i+=2)
    {
        if(temp[i]==0)
        {
            for(j=i+i; j<=100000; j+=i)
            {
                temp[j]=1;
            }
            prime[pos]=i;
            pos++;
        }
    }
    //  cout<<pos<<endl;

    for(i=0; i<pos; i++)
    {
        if(((prime[i+1]-prime[i])==(prime[i+2]-prime[i+1])) && prime[i+3]-prime[i+2]==prime[i+2]-prime[i+1] && prime[i+4]-prime[i+3]==prime[i+3]-prime[i+2])
        {
            box[sub].a=4;
            box[sub].x[0]=prime[i];
            box[sub].x[1]=prime[i+1];
            box[sub].x[2]=prime[i+2];
            box[sub].x[3]=prime[i+3];
            box[sub].x[4]=prime[i+4];
            sub++;
            i+=2;
        }

      else  if(((prime[i+1]-prime[i])==(prime[i+2]-prime[i+1])) && prime[i+3]-prime[i+2]==prime[i+2]-prime[i+1])
        {
            box[sub].a=3;
            box[sub].x[0]=prime[i];
            box[sub].x[1]=prime[i+1];
            box[sub].x[2]=prime[i+2];
            box[sub].x[3]=prime[i+3];
            sub++;
            i+=1;
        }
       else if((prime[i+1]-prime[i])==(prime[i+2]-prime[i+1]))
        {
            box[sub].a=2;
            box[sub].x[0]=prime[i];
            box[sub].x[1]=prime[i+1];
            box[sub].x[2]=prime[i+2];
            sub++;
        }

    }
 //   freopen("output.txt", "w", stdout);
    // cout<<sub<<endl;
    int a,b,c,d;

    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        if(a>b)
            swap(a,b);

        for(i=0; i<sub; i++)
        {
            c=box[i].a;
            if(box[i].x[0]>=a && box[i].x[c]<=b)
            {
                for(j=0; j<c; j++)
                    cout<<box[i].x[j]<<" ";
                cout<<box[i].x[c]<<endl;
            }
        }
    }
    return 0;
}
