#include<bits/stdc++.h>
using namespace std;
int long long x[1000000];
int main()
{
   long long int a,b,i,c,high=1,z=1;

    cin>>a;

    for(i=0;i<a;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<a-1;i++)
    {
        if(x[i+1]<=x[i]*2){
            z++;
        }
        else{
            z=1;
        }
        if(z>high){
                high=z;
        }
    }
cout<<high<<endl;
return 0;
}
