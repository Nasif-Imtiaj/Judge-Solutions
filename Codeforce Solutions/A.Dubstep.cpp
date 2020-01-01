#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k=0,c=0;
    string s,s1,temp;
    getline(cin, s);
    a=s.length();
    for(int i=0; i<a; i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
            temp.clear();
            b=s1.length();
            if(s1[b-1]>='A' && s1[b-1]<='Z')
            s1+=' ';
        }
        else
        {
            temp=s[i];
            s1+=temp;
        }
    }
    cout<<s1<<endl;
    return 0;
}
