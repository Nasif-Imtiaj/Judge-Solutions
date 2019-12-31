#include<bits/stdc++.h>
using namespace std;
int main()
{

//freopen("output.txt", "w", stdout);
    long long int i,a,b,c,d,x[15],l=0,high=0,low,r=0,skip=0;
    while(cin>>a)
    {
        b=a;
        while(b>0)
        {
            x[l]=b%10;
            b/=10;
            l++;
        }
        sort(x,x+l);
        for(i=l-1; i>=0; i--)
        {
            high*=10;
            high+=x[i];
        }
        for(i=0;i<l;i++){
            if(x[i]!=0){
                skip=i;
                break;
            }
        }
        low=x[skip];
        for(i=0;i<l;i++){
           if(i==skip)
            continue;
           else{
            low*=10;
            low+=x[i];
           }
        }
        c=high-low;
        d=c/9;

        cout<<high<<" - "<<low<<" = "<<c<<" = "<<"9 * "<<d<<endl;
        low=0;
        l=0;
        high=0;
    }
    return 0;
}
