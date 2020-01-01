#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,c,d,i,j,f=0,g=0;

string s,s1,s3;

cin>>s>>s1;

char x;

a=s.length();
for(i=0;i<a;i++)
{
    if(s[i]>s1[i]){
        s3+=s1[i];
    }
    else if(s[i]==s1[i]){
        s3+=s[i];
    }
    else{
            f=1;
        cout<<"-1"<<endl;
        break;
    }
}
if(f==0){
    cout<<s3<<endl;
}
return 0;
}
