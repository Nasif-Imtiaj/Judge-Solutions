#include<bits/stdc++.h>
using namespace std;
struct box
{
    string a,b;
};
int main()
{
    box s[10000],s1[10000];
    int a,z=0,i,j,k=0,x=0,y=0;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>s[i].a>>s[i].b;
    }

    for(i=0;i<a;i++){
        for(j=0; j<a; j++)
        {
            if(s[i].a.compare(s[j].b)!=0 && s[i].b.compare(s[j].a)!=0)
            {
                x++;
            }
        }
        if(x==a){
                s1[k].a=s[i].a;
                s1[k].b=s[i].b;
                k++;
        }
        x=0;
    }
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(s[i].b.compare(s[j].a)==0){
                swap(s[i].b,s[j].b);
                s1[k].a=s[i].a;
                s1[k].b=s[i].b;
                s[j].b.clear();
                y++;
            }
        }
        if(y>0){
            k++;
            y=0;
        }
    }
    cout<<k<<endl;
    for(i=0; i<k; i++)
    {
        cout<<s1[i].a<<" "<<s1[i].b<<endl;
    }
return 0;
}
