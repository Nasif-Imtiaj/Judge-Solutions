#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i;

    string s;

    cin>>s;

    a=s.length();

    for(i=0; i<a; i++)
    {
        if(s[i]==s[i-1] && i!=0){
            if(s[i+1] !='a' && s[i]!='a'){
                s[i]='a';
            }
           else if(s[i+1] !='b' && s[i]!='b'){
                s[i]='b';
            }
            else{
                s[i]='c';
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
