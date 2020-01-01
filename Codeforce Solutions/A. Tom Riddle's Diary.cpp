#include<bits/stdc++.h>
using namespace std;

struct box
{
    string s;
} d[105];
int main()
{
    int a,i,j,c=0;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>d[i].s;
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<i; j++)
        {
            if(d[i].s.compare(d[j].s)==0)
            {
                cout<<"YES"<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
        {
            cout<<"NO"<<endl;
        }
        c=0;
    }
    return 0;
}
