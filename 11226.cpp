#include<bits/stdc++.h>
using namespace std;
int track=0;

int SOF(int a)
{
    int z=0,i,b;
    b=a;
    while(a%2==0)
    {
        a/=2;
        z+=2;
    }
    for(i=3; i<=sqrt(a); i+=2)
    {
        while(a%i==0)
        {
            a/=i;
            z+=i;
        }
    }
    if(a!=1)
      z+=a;
  //  cout<<a<<endl;
    if(z==0 || z==b){
        track++;
        return 0;
    }
    else
    {
        track++;
        return SOF(z);
    }
}
int main()
{

//freopen("output.txt", "w", stdout);
    int a,b,c,d,i,ans=0,j=1;

     cin>>d;
     while(d--)
     {
         cin>>a>>b;
         if(b<a)
            swap(a,b);
         for(i=a; i<=b; i++)
         {
             track=0;
             SOF(i);
             if(track>ans)
                 ans=track;
         }
         printf("Case #%d:\n",j);
         cout<<ans<<endl;
         j++;
         ans=0;
         track=0;
    }
    return 0;
}
