#include<bits/stdc++.h>
using namespace std;

struct box
{
    int a,b;
} d[100000];
int main()
{
    int a,b,c,i,j,z=0,k=0,x=0,y=0,m,n;
    string s,s1;
    s1="bear";
    cin>>s;
    a=s.length();
    for(i=0; i<=a-4; i++)
    {

        for(j=0; j<4; j++)
        {
            if(s[i+j]==s1[j])
            {
                z++;
            }
        }
        if(z==4)
        {
            d[k].a=i;
            d[k].b=i+3;
            k++;
        }
        z=0;
    }
    for(i=0; i<k; i++)
    {
        if(i==0)
            m=d[i].a+1;
        else
            m=(d[i].a+1)-(d[i-1].a+1);
        n=a-(d[i].b+1)+1;
        x+=(m*n);
    }
    cout<<x<<endl;
    return 0;
}
