#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    int len,i;
    string s;
    while(cin>>s){
        len=s.length();
        for(i=0;i<len;i++)
        {
            s[i]-=7;
        }
    cout<<s<<endl;
    }
return 0;
}
