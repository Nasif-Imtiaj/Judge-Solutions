#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,z=0;

    cin>>a;

    while(a--){
        cin>>b;
        if(b==1)
            z=1;
    }
    if(z==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;


return 0;
}
