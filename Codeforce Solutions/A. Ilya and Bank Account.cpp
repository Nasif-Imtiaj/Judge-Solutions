#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;

    string s;

    cin>>s;

    a=s.length();

    if(s[0]=='-'){

       if(s[a-1]>s[a-2]){
        s.erase(s.begin()+a-1);
       }
       else{
        s.erase(s.begin()+a-2);
               }
        if(s[1]=='0'){
            s.erase(s.begin()+0);
            cout<<s<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    else{
        cout<<s<<endl;
    }
return 0;
}
