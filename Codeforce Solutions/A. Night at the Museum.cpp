#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x=0,y=0,i,j,k=0,z=0;
    int p=97,q=97,r,t;
    string s;
    cin>>s;
    a=s.length();
    r=s[0];
    t=s[0];
    while(a--)
    {
        while(1)
        {
            if(p==r)
            {
                break;
            }
            x++;
            p++;

            if(p>122)
            {
                p=97;
            }
        }
        while(1)
        {
            if(q==t)
            {
                break;
            }
            y++;
            q--;
            if(q<97)
            {
                q=122;
            }
        }
        if(x<y)
        {
            z+=x;
        }
        else
        {
            z+=y;
        }
        x=0;
        y=0;
        p=s[k];
        q=s[k];
        r=s[k+1];
        t=s[k+1];
        k++;
    }
    cout<<z<<endl;
    return 0;
}
