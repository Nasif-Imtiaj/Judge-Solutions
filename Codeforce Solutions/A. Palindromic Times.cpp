#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,m1,m2,mcarry=0,h1,h2,hcarry=0,i;
    int min_loop_start,mark=0;
    string s,minrevs;

    cin>>s;

while(1){
         min_loop_start=((s[3]-48)*10)+(s[4]-48);
         for(i=min_loop_start;i<59;i++)
         {
             m1=(s[4]-48)+1;
             if(m1>9){
                mcarry=m1/10;
                m1=m1%10;
             }
             s[4]=m1+48;

             m2=(s[3]-48)+mcarry;
             s[3]=m2+48;
             mcarry=0;

             minrevs=s;

             reverse(minrevs.begin(),minrevs.end());

             if(s.compare(minrevs)==0){
                cout<<s<<endl;
                mark=1;
                break;

             }
         }
     if(mark==1){
        break;
     }
        h1=(s[1]-48)+1;
        if(h1>9){
            hcarry=h1/10;
            h1=h1%10;
        }
        s[1]=h1+48;
        h2=(s[0]-48)+hcarry;
        s[0]=h2+48;


      if(s[0]=='2' && s[1]=='4'){
        s[0]='0';
        s[1]='0';
      }
      if(s[3]=='5' && s[4]=='9'){
        s[3]='0';
        s[4]='0';
      }
      if(s[0]=='0' && s[1]=='0' && s[3]=='0' && s[4]=='0' )
      {
          cout<<s<<endl;
          break;
      }
}
    return 0;
}
