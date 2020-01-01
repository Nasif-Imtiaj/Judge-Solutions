#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x=0,y[1000];
    memset(y,0,1000);
    string s;
    cin>>b>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    a=s.length();
    for(int i=0; i<a; i++)
    {
        y[s[i]]++;
    }
    for(int j=65; j<=90; j++)
    {
        if(y[j]>0)
        {
            x++;
        }
    }
    if(x==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
