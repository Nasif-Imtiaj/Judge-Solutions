#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,x=0,y=0,i=0;

    string s,s1,s2;

    cin>>a;

    while(a--)
    {
        cin>>s;
        if(i==0)
            s1=s;
        if(s.compare(s1)!=0)
        {
            s2=s;
        }
        if(s.compare(s1)==0)
        {
            x++;
        }
        if(s.compare(s2)==0)
        {
            y++;
        }
        i++;
    }
    if(x>y)
    {
        cout<<s1<<endl;
    }
    else
    {
        cout<<s2<<endl;
    }

    return 0;
}

