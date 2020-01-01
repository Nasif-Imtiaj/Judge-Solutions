#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long int a,b,c,d,x[50],y[50],z,total=0,i;
    fill(x,x+30,0);
    fill(y,y+30,0);

    cin>>a>>b;

    for(i=1;i<=a;i++)
    {
       z=i%10;
       x[z]++;
    }
    for(i=1;i<=b;i++)
    {
       z=i%10;
       y[z]++;
    }
   total+=(x[0]*y[5])+(x[0]*y[0]);
    total+=(x[1]*y[4])+(x[1]*y[9]);
    total+=(x[2]*y[3])+(x[2]*y[8]);
    total+=(x[3]*y[2])+(x[3]*y[7]);
    total+=(x[4]*y[6])+(x[4]*y[1]);
    total+=(x[5]*y[0])+(x[5]*y[5]);
    total+=(x[6]*y[4])+(x[6]*y[9]);
    total+=(x[7]*y[3])+(x[7]*y[8]);
    total+=(x[8]*y[7])+(x[8]*y[2]);
    total+=(x[9]*y[1])+(x[9]*y[6]);








cout<<total<<endl;
return 0;
}
