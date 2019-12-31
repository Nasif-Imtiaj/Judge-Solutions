#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i,j,z=1,low=10000,high=6227020800,mark=0;
    while(cin>>a)
    {
        if(a<8)
        {
            if(a%2!=0 && a<0)
            {
                cout<<"Overflow!"<<endl;
            }
            else
                cout<<"Underflow!"<<endl;
        }
        else if(a>7 && a<=13)
        {
            for(i=1; i<=a; i++)
            {
                z*=i;
            }
            cout<<z<<endl;
        }
        else
        {
            cout<<"Overflow!"<<endl;
        }
        z=1;
    }
    return 0;
}
