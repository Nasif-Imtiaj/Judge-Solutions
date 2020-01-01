#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=4,i,d,c1,b1,ok=0;

    cin>>a;

    b=a-c;

    if(b%3!=0 && b%2!=0){
         while(1){
            c+=2;
            b=a-c;
            if(b%2==0 || b%3==0){
                    ok=1;
                break;
            }
         }
    }
    else{
        ok=1;
    }
     if(ok==1)
    cout<<c<<" "<<b<<endl;

return 0;
}
