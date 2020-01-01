#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,z=0,i,j,small,last_stop,ini=0;

    cin>>a>>b;

    for(i=0; i<a; i++)
    {
        cin>>c>>d;
        while(ini<c){
            ini+=b;
            if(ini>=c){
                ini-=b;
                break;
            }
        }
      //  cout<<ini<<endl;
        z+=d-ini;
        ini=d;
    }
    cout<<z<<endl;
    return 0;
}
