#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,len,L1,L2,i,j=0,mark=0;

    string s,longest,s1,current;
    while(1){
    getline(cin,s);
    len=s.length();
    s1+=' ';
    s1+=s;
    if(s[len-5]=='E' && s[len-4]=='-' && s[len-3]=='N' && s[len-2]=='-' && s[len-1]=='D')
    break;
    }
    len=s1.length();
    for(i=0;i<len;i++)
    {
        if(s1[i]>='A' && s1[i]<='Z' || s1[i]>='a' && s1[i]<='z'){
          mark=1;
        }
        if(!(s1[i]>='A' && s1[i]<='Z') && !(s1[i]>='a' && s1[i]<='z') && s1[i]!='-'){
            mark=0;
            L1=current.length();
            L2=longest.length();
            if(L1>L2){
                longest=current;
            }
            current.clear();

        }
        if(mark==1){
            current+=s1[i];
        }
    }
transform(longest.begin(), longest.end(),longest.begin(), ::tolower);
 cout<<longest<<endl;
return 0;
}
