#include<bits/stdc++.h>
using namespace std;
int y[1000000];
int main()
{
   // freopen("output.txt", "w", stdout);
    int a,b,c,x[10000],i=0,j=0,w=1,highest=0,same=0,R,R2,remainder,ans,number=0;

    while(cin>>b)
    {
        {
            if(b==0)
            {
                break;
            }
        }
        x[0]=b;
        while(cin>>a)
        {
            if(a==0)
            {
                break;
            }
            x[w]=a;
            w++;
        }
        for(i=1; i<=100000; i++)
        {
            if(x[0]<0)
            {
                R=x[0]%i;
                if(R!=0)
                R+=i;
            }
            else
            {
                R=x[0]%i;
            }
            remainder=R;
                for(j=0; j<w; j++)
                {
                    if(x[j]<0)
                    {
                        R=x[j]%i;
                        if(R!=0)
                        R+=i;
                    }
                    else
                    {
                        R=x[j]%i;
                    }
                    if(R==remainder){
                        same++;
                    }
                    else{
                        break;
                    }
                }
             if(same==w){
                ans=i;
             }
             same=0;
        }
      cout<<ans<<endl;
        number++;
        w=1,highest=0,same=0,ans;
    }

    return 0;
}
