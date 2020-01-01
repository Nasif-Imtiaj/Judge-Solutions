#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,z=0,j=0;

    string s,s1;

    cin>>a>>s;

    for(int i=0; i<a; i++)
    {
        b=s1.length();
        if(s1[b-1]=='x' && s1[b-2]=='x' && s[i]=='x')
            z++;
        else
        {
            s1+=s[i];
        }
    }
    cout<<z<<endl;
    return 0;
}
