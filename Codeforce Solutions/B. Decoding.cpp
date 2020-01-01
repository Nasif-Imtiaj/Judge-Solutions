#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    string s,s1,s2;
    cin>>a>>s;
    for(i=a-1; i>=0; i=i-2)
    {
        if(i>=0)
            s1+=s[i];
        if(i-1>=0)
            s2+=s[i-1];

    }
    reverse(s1.begin(),s1.end());
    s2+=s1;
    cout<<s2<<endl;
    return 0;
}
