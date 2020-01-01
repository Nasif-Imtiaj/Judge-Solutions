#include<bits/stdc++.h>
using namespace std;
struct test
{
    string a,b;
};
int main()
{
    test s[10000];
    map<int,string> input;
    int a,b,c,d,e,f,i=0,j=0,k=0,h=0,m,n;
    cin>>c>>e;
    d=e;
    f=c;
    while(e--)
    {
        cin>>s[i].a>>s[i].b;
        i++;
    }
    while(c--)
    {
        cin>>input[k];
        k++;
    }
    for(m=0; m<f; m++)
    {
        for(n=0; n<d; n++)
        {
            if(input[m].compare(s[n].a)==0)
            {
                a=s[n].a.length();
                b=s[n].b.length();
                if(a<b)
                {
                    input[m]=s[n].a;
                }
                else if(b<a)
                {
                    input[m]=s[n].b;
                }
                else
                {
                    input[m]=input[m];
                }
            }
        }
    }
for(m=0;m<f;m++){
    cout<<input[m]<<" ";
}
    return 0;
}
