#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,w=1,mark=0;
    double x,y,z=0;
    while(cin>>a>>x>>c>>d)
    {
        if(a==0)
        {
            break;
        }
        y=x*((double)d/100);
        while(1)
        {
            z+=x;
            if(z>a)
            {
                cout<<"success on day "<<w<<endl;
                mark=1;
                break;
            }
            else
            {
                z-=c;
            }
        if(z<0){
            break;
        }

            x-=y;
            if(x<0){
                x=0;
            }
            w++;
        }
        if(mark==0)
        {
            cout<<"failure on day "<<w<<endl;
        }
        z=0;
        w=1;
        mark=0;
    }
    return 0;
}
