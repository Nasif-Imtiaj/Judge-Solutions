#include<bits/stdc++.h>
using namespace std;
int x[10000000],z[1000000],y[1000000];
int main()
{
   // freopen("output.txt", "w", stdout);
   unsigned long long int a,b,c,d,i,j,w=0,start=0;
    for(i=2; i<=10000000; i++)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<=10000000; j+=i)
            {
                x[j]=1;
            }
        }
        if(x[i]==0)
        {
            y[w]=i;
            w++;
        }
    }
   // cout<<w<<endl;
    while(cin>>a)
    {
        if(a==-1)
        {
            break;
        }
        while(1){
            if(a%y[start]==0){
                    cout<<"    "<<y[start]<<endl;
                a=a/y[start];
            }
            else{
                start++;
            }

            if(a==1 || start==w){
                break;
            }
            //cout<<start<<endl;
        }
        if(a!=1)
          cout<<"    "<<a<<endl;
          start=0;
          cout<<endl;

    }
    return 0;
}
