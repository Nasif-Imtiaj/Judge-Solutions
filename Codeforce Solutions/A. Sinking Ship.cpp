#include<bits/stdc++.h>
using namespace std;
struct box
{
    string a,b;
} ;
int main()
{
    int c,k=0,i;
 box d[105],x[105];
    cin>>c;

    for(i=0; i<c; i++)
    {
        cin>>d[i].a>>d[i].b;
    }
    for(i=0; i<c; i++)
    {
        if(d[i].b.compare("rat")==0)
        {
            x[k].a=d[i].a;
            k++;
        }
    }
    for(i=0; i<c; i++)
    {
        if(d[i].b.compare("woman")==0 || d[i].b.compare("child")==0)
        {
            x[k].a=d[i].a;
            k++;
        }
    }
    for(i=0; i<c; i++)
    {
        if(d[i].b.compare("man")==0)
        {
            x[k].a=d[i].a;
            k++;
        }
    }
    for(i=0; i<c; i++)
    {
        if(d[i].b.compare("captain")==0)
        {
            x[k].a=d[i].a;
            k++;
        }
    }

for(i=0;i<c;i++)
    {
        cout<<x[i].a<<endl;
    }
    return 0;
}
