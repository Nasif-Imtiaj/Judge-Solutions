#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,x=0,y=0;

    string s;

    cin>>s;

    a=s.length();

    for(int i=0; i<a; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            x++;
        }
        else
        {
            y++;
        }
    }

    if(x>y)
    {
        transform(s.begin(), s.end(),s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    }
    cout<<s<<endl;
    return 0;

}
