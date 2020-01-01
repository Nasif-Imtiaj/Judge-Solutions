#include<bits/stdc++.h>
using namespace std;
dividing_track(string main,string sub)
{
    int len1,len2,track=0,check=0,ans=0,i,j;
    len1=main.length();
    len2=sub.length();
    ans=len1/len2;
    for(i=0; i<len1; i=i+len2)
    {
        for(j=0; j<len2; j++)
        {
            if(main[i+j]==sub[j])
            {
                track++;
            }
        }
        if(track==len2)
        {
            check++;
            track=0;
        }
        else
        {
            break;
        }
    }
    if(check==ans)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int total=0,a,b,div_len,i,check_1=0,check_2=0;
    string s,s1,div_check;
    cin>>s>>s1;
    a=s.length();
    b=s1.length();
    if(a<b)
    {
        swap(a,b);
        swap(s,s1);
    }
    if(a==b || a%b==0)
    {
        total=dividing_track(s,s1);
    }
    div_len=b/2;
    for(i=0; i<div_len; i++)
    {
        div_check+=s1[i];
        check_1=dividing_track(s,div_check);
        check_2=dividing_track(s1,div_check);
        if(check_1==1 && check_2==1)
        {
            total++;
        }
        check_1=0;
        check_2=0;
    }
    cout<<total<<endl;
    return 0;
}
