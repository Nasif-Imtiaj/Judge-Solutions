#include<bits/stdc++.h>
using namespace std;
int main()
{

  int a,b,c,i,k,j=0;

  string s;

  cin>>a>>b>>s;

  for(i=0;i<a;i++)
    {
        if(s[i]=='G' ||s[i]=='T'){
            k=i;
            break;
        }
    }
for(i=k;i<a;i=i+b){
    if(s[i]=='.'){
        continue;
    }
    else if(s[i]=='#'){
        cout<<"NO"<<endl;
        j=1;
        break;
    }
    else if(s[i]=='T' && i!=k || s[i]=='G' && i!=k){

       cout<<"YES"<<endl;
       j=1;
       break;
    }
}
if(j==0){
    cout<<"NO"<<endl;
}
return 0;
}
