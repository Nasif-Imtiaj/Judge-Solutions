#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,x[100000],i,j,z=0,k,highest;
    cin>>a;
    if(a==1){
        highest=1;
    }
    else{
    for(i=1; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            x[z]=i;
            z++;
            x[z]=a/i;
            z++;
        }
    }
    sort(x,x+z);
    k=z;
    k--;
    highest=x[k];
    for(i=1; i<z; i++)
    {
        if(highest%(x[i]*x[i])==0)
        {
            k--;
            highest=x[k];
            i=0;
        }
    }
    }
    cout<<highest<<endl;
    return 0;
}
