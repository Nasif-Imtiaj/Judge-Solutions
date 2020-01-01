#include<bits/stdc++.h>
using namespace std;
string palin_check,palin_rev;
string palin_check1,palin_rev1;
palindrome_add_before(string s,char x,int a)
{
    palin_check.clear();
    palin_rev.clear();
    int i,j,k;
    int len1=s.length();
    for(i=0; i<len1; i++)
    {
        if(a==i)
        {
            palin_check+=x;
        }
        palin_check+=s[i];
    }
    palin_rev=palin_check;
   // cout<<palin_check<<endl;
    reverse(palin_rev.begin(),palin_rev.end());
    if(palin_check.compare(palin_rev)==0)
        return 1;
    else
        return 0;
}
palindrome_add_after(string s,char x,int a)
{
    palin_check1.clear();
    palin_rev1.clear();
    int i,j,k;
    int len1=s.length();
    for(i=0; i<len1; i++)
    {

        palin_check1+=s[i];
        if(a==i)
        {
            palin_check1+=x;
        }
    }
    palin_rev1=palin_check1;
  //  cout<<palin_check1<<endl;
    reverse(palin_rev1.begin(),palin_rev1.end());
    if(palin_check1.compare(palin_rev1)==0)
        return 1;
    else
        return 0;
}
int main()
{
    int len,i,j,add_before,add_after,check1=0,check2=0,mark=0,k;
    string s,ans,if_alreadyp,if_alreadyp_rev;
    char add_i,add_j;
    cin>>s;
    len=s.length();
    if_alreadyp=s;
    if_alreadyp_rev=s;
    reverse(if_alreadyp_rev.begin(),if_alreadyp_rev.end());
    if(if_alreadyp.compare(if_alreadyp_rev)==0)
    {
        k=len/2;
        for(i=0; i<len; i++)
        {
            ans+=s[i];
            if(i==k)
            {
                ans+=s[i];
            }
        }
        cout<<ans<<endl;
    }
    else
    {
        for(i=0,j=len-1; i<j; i++,j--)
        {
            if(s[i]!=s[j])
            {
                add_before=i;
                add_j=s[j];
                add_after=j;
                add_i=s[i];
                check1=palindrome_add_before(s,add_j,add_before);
                check2=palindrome_add_after(s,add_i,add_after);
            }
            if(check1==1)
            {
                ans=palin_check;
                mark=1;
                break;
            }
            else if(check2)
            {
                ans=palin_check1;
                mark=1;
                break;
            }
        }
        if(mark==1)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<"NA"<<endl;
        }
    }
    return 0;
}
