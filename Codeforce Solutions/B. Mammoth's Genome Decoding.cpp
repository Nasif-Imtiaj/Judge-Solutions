#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,check,i,x[10],highest=0,pos=0,needed=0,ok,new_val=0,go=0;
    fill(x,x+10,0);
    string s;
    cin>>len>>s;
    if(len%4==0)
    {
        for(i=0; i<len; i++)
        {
            if(s[i]=='A')
            {
                x[0]++;
            }
            if(s[i]=='C')
            {
                x[1]++;
            }
            if(s[i]=='G')
            {
                x[2]++;
            }
            if(s[i]=='T')
            {
                x[3]++;
            }
            if(s[i]=='?')
            {
                x[4]++;
            }
        }
        new_val=len/4;
        for(i=0;i<4;i++){
            x[i]=new_val-x[i];
            if(x[i]<0){
                go=1;
            }
        }
        if(go==0){
              for(i=0;i<len;i++){
                if(s[i]=='?' && x[0]>0)
                  {
                      s[i]='A';
                      x[0]--;
                  }
                if(s[i]=='?' && x[1]>0)
                  {
                      s[i]='C';
                      x[1]--;
                  }
                if(s[i]=='?' && x[2]>0)
                  {
                      s[i]='G';
                      x[2]--;
                  }
                if(s[i]=='?' && x[3]>0)
                  {
                      s[i]='T';
                      x[3]--;
                  }
              }
              cout<<s<<endl;
        }
         else{
            cout<<"==="<<endl;
         }
    }
    else
    {
        cout<<"==="<<endl;
    }
    return 0;
}
