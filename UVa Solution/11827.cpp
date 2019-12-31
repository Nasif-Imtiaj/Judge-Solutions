#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int main()
{
    int len,a,b,c,d,e,q,x[1000],i,w=0,j,highest=0,big,small;
    string y,z;
    stringstream change;
    cin>>q;
    getchar();
    while(q--)
    {
        getline(cin,y);
        len=y.length();
        for(i=0; i<=len; i++)
        {
            if(y[i]>='0' && y[i]<='9')
            {
                z+=y[i];
            }
            else
            {
                change.clear();
                change<<z;
                change>>d;
                x[w]=d;
                w++;
                z.clear();
            }
        }
        for(i=0; i<w; i++)
        {
            for(j=i+1; j<w; j++)
            {
                if(x[i]>x[j])
                {
                    big=x[i];
                    small=x[j];
                }
                else
                {
                    big=x[j];
                    small=x[i];
                }
                e=gcd(big,small);
                if(e>highest)
                    highest=e;
            }
        }
        cout<<highest<<endl;
        highest=0;
        w=0;
        z.clear();
        change.clear();
    }
    return 0;
}
