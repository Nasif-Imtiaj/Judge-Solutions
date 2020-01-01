#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int d,a,b,c;
    cin>>a;
    if(a<3)
    {
        cout<<a<<endl;
    }
    else{
        if(a%2==0)
        {
           a=a-1;
           b=a-1;
           c=b-1;
        }
        else{
            b=a-1;
            c=b-1;
        }
        d=a*b*c;
        cout<<d<<endl;
    }
    return 0;
}
