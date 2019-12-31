#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   unsigned long long int a,b,c,z=0,i;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        b=sqrt(a);

        if(b*b==a)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        z=0;
    }
    return 0;
}
