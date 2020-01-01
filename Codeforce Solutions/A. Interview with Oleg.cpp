#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,mark=0,check=0;

     string s,temp,add;

     add="***";

     cin>>a>>s;

     for(i=0;i<a;i++)
    {
        if(s[i]=='o'){
                for(j=i;j<a;j++){
                    if(s[j]=='o'){
                        if(s[j+1]=='g' && s[j+2]=='o'){
                            check=1;
                            continue;
                        }
                        else{
                            break;
                        }
                    }
                }
                if(check==1){
                 mark=1;
                 i=j;
                }
        }
        if(mark!=1)
        temp+=s[i];
        if(mark==1){
            temp+=add;
        }
        mark=0;
        check=0;
    }
cout<<temp<<endl;
return 0;
}
