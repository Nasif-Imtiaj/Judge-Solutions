#include<bits/stdc++.h>
using namespace std;
struct box
{
    int a;
    string s;
} d[110];
int main()
{
    int a,b,z=0,x[110],i,flg=0,j;
    int len;
    string s;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>x[i];
    }
    getchar();
    for(i=0; i<a; i++)
    {
        getline(cin,d[i].s);
    }
    for(j=0; j<a; j++)
    {
        len=d[j].s.length();
        s=d[j].s;
        for(i=0; i<len; i++)
        {
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='y')
            {
                z++;
            }
        }
        if(z!=x[j])
        {
            flg=1;
            break;
        }
        z=0;
    }
    if(flg==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
