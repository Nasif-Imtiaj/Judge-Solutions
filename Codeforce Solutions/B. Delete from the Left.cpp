#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,z=0,j;
    string s,s1;
    cin>>s>>s1;
    a=s.length();
    b=s1.length();
    if(a<b)
    {
        swap(a,b);
        swap(s,s1);
    }
    for(i=a-1,j=b-1; j>=0; i--,j--)
    {
        if(s[i]==s1[j])
        {
            z++;
        }
        else{
            break;
        }
    }
    d=(a-z)+(b-z);
    cout<<d<<endl;
    return 0;
}
