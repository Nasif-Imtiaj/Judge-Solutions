#include<bits/stdc++.h>
using namespace std;
int status[100000/32];
int prime[1000000];
int pos=0;
bool check(int a,int pos)
{
    return (a & (1<<pos));
}
int fix(int a,int pos)
{
    return a=a | (1<<pos);
}
void seive()
{
    int i,j,n;
    for(i=3; i<=sqrt(100000); i+=2)
    {
        if(check(status[i/32],i%32)==0)
        {
            for( j = i*i; j <= sqrt(100000); j += 2*i )
            {
                status[j/32]=fix(status[j/32],j % 32)   ;
            }

        }
    }
}
int main()
{
    prime[0]=2;
    pos++;
    seive();

    for(int i=0; i<pos; i++)
        cout<<prime[i]<<" ";

    cout<<endl<<endl;
        for(int i=3; i<=100000; i+=2)
            if( check(status[i/32],i%32)==0)
                printf("%d ",i);







}
