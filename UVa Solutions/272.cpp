#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,x=0,y=0,mark=0;
    string s="''",s1="``";
    char t;
    while(scanf("%c",&t)!=EOF)
    {
        if(x==0 && t=='"')
        {
            cout<<s1;
            x=1;
        }
        else if(x==1 && t=='"')
        {
            cout<<s;
            x=0;
        }
        else
        {
            cout<<t;
        }
    }
    return 0;
}
