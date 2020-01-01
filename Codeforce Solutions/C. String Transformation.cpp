#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,len,check=97,count_c=0;
    string s,temp_check,ans;
    cin>>s;
    len=s.length();
    for(i=0; i<len; i++)
    {
        if(count_c!=26 && s[i]<=check)
        {
            s[i]=check;
            check++;
            count_c++;
        }
    }
    if(count_c==26){
        cout<<s<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}
