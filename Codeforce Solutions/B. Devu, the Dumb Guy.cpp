#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,x[100010],i,z=0;

    cin>>a>>b;

    for(i=0;i<a;i++)
    {
        cin>>x[i];
    }
    sort(x,x+a);

    for(i=0;i<a;i++)
    {
        z+=x[i]*b;
        if(b>1){
            b--;
        }
    }
cout<<z<<endl;
return 0;
}
