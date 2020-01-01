#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,i,z=0;

    string s;

    cin>>s;

    a=s.length();

    for(i=0;i<a;i++)
    {
        if(s[i]=='n'){
            continue;
        }
    else if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
          if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' ||s[i+1]=='o' || s[i+1]=='u')
        {
           i++;
        }
        else{
            z=1;
            cout<<"NO"<<endl;
            break;
        }
        }
    }
if(z==0){
    cout<<"YES"<<endl;
}
return 0;
}
