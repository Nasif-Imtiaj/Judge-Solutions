#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int x;
int lps[1000000];
int len1,len2;
void LpS_table(string s)
{
    lps[0]=0;
    int i=1,st=0;
    for(i=1; i<len2; i++)
    {
        if(s[i]==s[st])
        {
            st++;
            lps[i]=st;
        }
        else
        {
            if(st!=0)
            {
                st=lps[st-1];
                i--;
            }
            else
                lps[st]=0;
        }
    }
}
void KMP_search(string s,string pat)
{
    int i=0,j=0;
    LpS_table(pat);
    while(i<len1)
    {

        if(s[i]==pat[j])
        {
            i++;
            j++;
        }
        if(j==len2)
        {
            x=1;
            j=lps[j-1];
        }
        else if(i < len1 && s[i]!=pat[j])
        {
            if(j!=0)
                j=lps[j-1];
            else
                i++;
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c;
    string s,s1;
    cin>>a;
    getchar();
    while(a--)
    {
        cin>>s;
        cin>>b;
        getchar();
        len1=s.length();
        while(b--)
        {
           cin>>s1;
           len2=s1.length();
           KMP_search(s,s1);
           if(x==1)
            printf("y\n");
           else
            printf("n\n");
            x=0;
        }
    }
    return 0;
}
