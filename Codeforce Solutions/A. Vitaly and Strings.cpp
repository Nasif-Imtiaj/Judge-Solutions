#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d=0,f=0,mark=0,mark1=0,special_case=0,part=0,i,len;
    string s,s1,s2;
    string inS,inS1;
    cin>>s>>s1;
    inS=s;
    inS1=s1;
    a=s.length();
    for(i=0; i<a; i++)
    {
        if(s[i]<s1[i] && c==0){
            mark=1;
            c=1;
            d=s1[i]-s[i];
        }
       if(d!=1 && d!=0)
       {
           s[i]+=1;
           mark1=1;
       }
       if(d==0 && mark1==0 && mark==1 && s[i]!='z'){

         s[i]+=1;
         mark1=1;
       }
       if(d==0 && mark1==0 && mark==1 && s[i]=='z'){
         special_case=1;
         break;
       }
       s2+=s[i];
       d=0;
    }
    if(special_case==1){
          //  cout<<s2<<endl;
            s2[i-1]=s1[i-1];
           // cout<<s2<<endl;
        for(int j=i;j<a;j++)
        {
            b=s1[j];
            s1[j]-=1;
            if(s1[j]<97){
                s1[j]=97;
            }
            if(s1[j]<b){
                part=1;
            }
            s2+=s1[j];
        }
        if(part==1){
            mark1=1;
        }
    }
    if(mark1==1)
    {
        cout<<s2<<endl;
    }
    else
    {
        cout<<"No such string"<<endl;
    }
    return 0;
}
