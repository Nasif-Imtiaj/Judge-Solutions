#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,c;

    while(cin>>a){
            if(a==0)
            break;
    if(a==2 || a==3 || a==5 || a==7 || a==13 || a==17 || a==19 || a==31)
    {
        b=pow(2,a-1)*(pow(2,a)-1);

        cout<<"Perfect: "<<b<<"!"<<endl;
    }
    else if(a==11 || a==23 || a==29)
    {
        cout<<"Given number is prime. But, NO perfect number is available."<<endl;
    }
    else
    {
        cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
    }
    }
    return 0;
}
