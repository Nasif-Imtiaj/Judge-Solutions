#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
long long int BS_small(long long int l,long long int r,long long int x,long long int chimps[])
{
    while(l<=r)
    {
        long long int mid;
        mid=(l+r)/2;
        //cout<<mid<<endl;
        if(chimps[mid]>=x)
        {
            r=mid-1;
        }
        else if(chimps[mid]<x && chimps[mid+1]>=x)
            return chimps[mid];
        else
            l=mid+1;

    }
    return -1;
}
long long int BS_big(long long int l,long long int r,long long int x,long long int chimps[])
{
    while(l<=r)
    {
        long long int mid;
        mid=(l+r)/2;
        if(chimps[mid]<=x)
        {
            l=mid+1;
        }
        else if(chimps[mid]>x && chimps[mid-1]<=x)
            return chimps[mid];
        else
            r=mid-1;
    }
    return -1;
}

int main()
{
    int n,q,i,j,k,l,x,y;
    long long int chimps[100000],quries[30000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>chimps[i];
    }
    cin>>q;
    for(i=0; i<q; i++)
    {
        cin>>quries[i];
    }
    for(i=0; i<q; i++)
    {
        if(quries[i]>chimps[n-1]){
            x=chimps[n-1];
        }
        else
        x=BS_small(0,n-1,quries[i],chimps);
        if(quries[i]<chimps[0])
            y=chimps[0];
        else
        y=BS_big(0,n-1,quries[i],chimps);
        if(x==-1)
        {
            cout<<"X";
        }
        else
            cout<<x;
        cout<<" ";
        if(y==-1)
            cout<<"X"<<endl;
        else
            cout<<y<<endl;
        }
    return 0;
}
