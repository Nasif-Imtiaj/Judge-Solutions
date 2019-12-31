#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    if(a%b==0)
        return b;
    return GCD(b,a%b);
}
int main()
{
    int a,b,c,i,j,z=0,boro,suto;
    while(cin>>a)
   {
       if(a==0){
        break;
       }
    for(i=1;i<a;i++)
    {
        for(j=i+1;j<=a;j++)
        {
            b=GCD(j,i);
            z+=b;
        }
    }
    cout<<z<<endl;
   z=0;
   }
    return 0;
}
