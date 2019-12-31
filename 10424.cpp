#include<bits/stdc++.h>
using namespace std;
int make_single(int a)
{
    int z=0;
    while(a>0)
    {
        z+=a%10;
        a/=10;
    }
    if(z<10)
        return z;
    return make_single(z);
}
int main()
{
    int a,b,c,d,x=0,y=0,i;
    double p,q,r;
    string m,n;
    while(getline(cin,m))
    {
        getline(cin,n);
        for(i=0; i<m.length(); i++)
        {
            if(m[i]>='A' && m[i]<='Z')
            {
                x+=m[i]-64;
            }
            if(m[i]>='a' && m[i]<='z')
            {
                x+=m[i]-96;
            }
        }
        for(i=0; i<n.length(); i++)
        {
            if(n[i]>='A' && n[i]<='Z')
            {
                y+=n[i]-64;
            }
            if(n[i]>='a' && n[i]<='z')
            {
                y+=n[i]-96;
            }
        }
        p=make_single(x);
        q=make_single(y);

        if(p>q)
            swap(p,q);

        r=(p/q)*100;
        cout<<setprecision(2)<<fixed<<r<<" %"<<endl;
        x=0;
        y=0;
    }
    return 0;
}
