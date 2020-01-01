#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,x[5],ans=0,extra=0,i=0;

    cin>>a>>b>>c;
    while(a>0 && b>0 || b>0 && c>0 ||a>0 && c>0)
    {
        if(a>=b && b>=c && a>=2 && b>=1)
        {
            a-=2;
            b--;
            ans++;
            continue;
        }
        if(a>=c && c>=b && a>=2 && c>=1)
        {
            a-=2;
            c--;
            ans++;
            continue;
        }
        if(b>=c && c>=a && b>=2 && c>=1)
        {
            b-=2;
            c--;
            ans++;
            continue;
        }
        if(b>=a && a>=c && b>=2 && a>=1)
        {
            b-=2;
            a--;
            ans++;
            continue;
        }
        if(c>=a && a>=b && c>=2 && a>=1)
        {
            c-=2;
            a--;
            ans++;
            continue;
        }
        if(c>=b && b>=a && c>=2 && b>=1)
        {
            c-=2;
            b--;
            ans++;
            continue;
        }
      // cout<<a<<" "<<b<<" "<<c<<endl;
         if(a==1 && b==1 && c==1)
         {
             ans++;
             break;
         }
        if(a==0 && b==1 && c==1 || a==1 && b==0 && c==1 || a==1 && b==1 && c==0 || a==0 && b==0 && c==0)
        {
           // ans++;
            break;
        }
    }

   cout<<ans<<endl;





    return 0;
}
