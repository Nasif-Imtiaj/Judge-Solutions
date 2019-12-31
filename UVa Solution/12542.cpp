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
int x[100002],found;
int lps[1000000];
string primes[10000];
void sieve()
{
    for(int i=2; i<=100000; i++)
    {
        if(x[i]==0)
        {
            for(int j=i+i; j<=100000; j+=i)
                x[j]=1;
        }
    }
}
int len1,len2;
void LPS_table(string pat)
{
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < len2)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
void KMP_search(string s,string pat)
{
    len1=s.length();
    len2=pat.length();
    LPS_table(pat);
    int i=0,j=0;
    while (i < len1)
    {
        if (pat[j] == s[i])
        {
            j++;
            i++;
        }

        if (j == len2)
        {
           found=1;
            j = lps[j - 1];
        }
        else if (i < len1 && pat[j] != s[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}

int main()
{
    //freopen("output.txt", "w", stdout);
    sieve();
    int a,b,c,d,i,j,pos=0,k=0;
    string s,s1,ans;
    stringstream z;
    for(i=2; i<=100000; i++)
    {
        if(x[i]==0)
        {
            z.clear();
            s.clear();
            z<<i;
            z>>s;
            primes[pos]=s;
            pos++;
        }
    }
    while(getline(cin,s))
    {
        if(s[0]=='0' && s.length()==1)
            break;
        for(i=0; i<pos; i++)
        {
            if(primes[i].length()>s.length())
                break;
            found=0;
            KMP_search(s,primes[i]);
            if(found!=0)
            {
                ans=primes[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
