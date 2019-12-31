#include<bits/stdc++.h>
using namespace std;
unsigned long long int x[10000000],l=1;
int main()
{
   freopen("output.txt", "w", stdout);
    x[0]=1;
    unsigned long long int i,a=16,b=68,c=81,d=625,e=2401,f=14641,g=28561,h,i,j;
    char y='"';
    for(i=2;i<30;i++)
    {
        x[l]=a;
        a*=4;
        l++;
        x[l]=b;
        b*=8;
        l++;
        x[l]=c;
        c*=9;
        l++;
        x[l]=d;
        d*=25;
        l++;
        x[l]=e;
        e*=49;
        l++;
        x[l]=f;
        f*=121;
        l++;
        x[l]=g;
        g*=169
        l++;
        x[l]=pow(289,i)+1;
        l++;
    }
  //  cout<<l<<endl;
  sort(x,x+l);
  for(i=0;i<l;i++){
  if(x[i]!=x[i-1])
  cout<<"cout<<"<<y<<x[i]<<y<<"<<endl;"<<endl;
  }

return 0;
}
