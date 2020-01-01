#include<bits/stdc++.h>
using namespace std;
struct box
{
    int p,q,r;
} d[310];
int main()
{
    int a,b,c,i,j,k,l,z=0,y;
    string s,s1,s2,check,temp,change,half1,half2,result;
    cin>>s>>b;
    for(i=0; i<b; i++)
    {
        cin>>d[i].p>>d[i].q>>d[i].r;
    }
    a=s.length();
    for(i=0; i<b; i++)
    {
        for(j=d[i].p-1; j<d[i].q; j++)
        {
            change+=s[j];
        }
        c=change.length();
        y=d[i].r%c;
        while(y--)
        {
            temp+=change[c-1];
            change.erase(change.begin()+(c-1));
            temp+=change;
            change=temp;
            temp.clear();
        }

        for(j=d[i].p-1,z=0; j<d[i].q; j++,z++)
        {
            s[j]=change[z];
        }
        z=0;
        change.clear();
    }
    cout<<s<<endl;
    return 0;
}
