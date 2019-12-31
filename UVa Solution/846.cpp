#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,b,c,ans=0,x=1;
   cin>>c;
   while(c--){
    cin>>a>>b;

    while(a!=b)
    {
        a+=x;
        ans++;
        if(a>=b)
            break;
        b-=x;
        ans++;
        if(b<=a)
            break;
            x++;
    }
    cout<<ans<<endl;
    x=1;
    ans=0;


   }



    return 0;
}
