#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=1378,c,d,z;

    cin>>a;
    if(a==0){
        cout<<"1"<<endl;
    }
    if(a%4==1)
    {
        cout<<"8"<<endl;
    }
    else if(a%4==2)
    {
        cout<<"4"<<endl;
    }
    else if(a%4==3)
    {
        cout<<"2"<<endl;
    }
    else if(a%4==0)
    {
        cout<<"6"<<endl;
    }
    return 0;
}
