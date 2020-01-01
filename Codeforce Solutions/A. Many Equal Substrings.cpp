#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,z=0,x=0,y=0,mark=0,i,j;

    string s,s1,news,rev,add;

    cin>>a>>b>>s;

    s1=s;

    for(i=1; i<a; i++)
    {
           if(s1[i]==s[0]){
            for(j=0; j<a-1; j++)
            {
                if(s1[i+j]==s[j]){
                    x++;
                }
                else{
                        break;
                }
            }
           }
           if(x==a-i && x>mark)
           {
               mark=x;
           }
           x=0;
    }
//cout<<mark<<endl;

for(i=mark;i<a;i++)
{
    add+=s[i];
}

for(i=0;i<b-1;i++)
{
    s1+=add;
}
    cout<<s1<<endl;
    return 0;
}
