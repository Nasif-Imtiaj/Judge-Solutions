#include<bits/stdc++.h>
using namespace std;
struct ko{
string m;
};
int main()
{
    int a,b,z=1,j=0;
    ko check[100];
    string s,temp,s1,s2;
    char c;
    cin>>s;
    a=s.length();
    b=a-1;
    int g=0;
    while(b--)
    {
     check[j].m=s;
     temp+=s[a-1];
     for(int i=0;i<a-1;i++){
        temp+=s[i];
     }
     s=temp;
     for(int i=0;i<=j;i++)
     {
         if(s.compare(check[i].m)!=0){
            g++;
         }
     }
      if(g-1==j){
            z++;
        }
        temp.clear();
        j++;
        g=0;
    }
cout<<z<<endl;
return 0;
}
