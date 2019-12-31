#include<bits/stdc++.h>
using namespace std;
int divisors(long long int a,int check)
{
    long long int b,c,i,track=0;
   // cout<<sqrt(b)<<endl;
    for(i=2; i<=sqrt(a); i++)
    {
        c=a;
        track=0;
        while(c%i==0)
        {
            c/=i;
            track++;
        }
        if(c==1 && check==0)
            return track;
        if(c==1 && check==1 && track%2!=0)
            return track;
    }
    return 1;
}
int main()
{
   // freopen("output.txt", "w", stdout);
    long long int a,b,c,note=0;
    while(cin>>a){
            if(a<0){
                note=1;
                a*=-1;
            }
           if(a==0)
            break;
            b=divisors(a,note);
           // cout<<b<<endl;
         cout<<b<<endl;
         note=0;
    }
    return 0;
}
