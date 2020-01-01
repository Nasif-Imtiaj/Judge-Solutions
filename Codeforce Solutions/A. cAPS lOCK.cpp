#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,z=0,w=0;

    string s;

    cin>>s;

    a=s.length();

    for(int i=0;i<a;i++)
    {
        if(s[i]>90){
            z++;
        }
        if(s[i]>='A' && s[i]<='Z'){
            w++;
        }
    }
if(s[0]>90 && z==1){
    transform(s.begin(),s.end(), s.begin(), ::tolower);
    s[0]-=32;
    cout<<s<<endl;
}
else if(a==w){
    transform(s.begin(),s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

}
else{
    cout<<s<<endl;
}
return 0;
}
