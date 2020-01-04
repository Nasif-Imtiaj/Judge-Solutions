#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
string make_bin(int a)
{
    string s;
    while(a>0)
    {
        s+=a%2+48;
        a/=2;
    }
    s+='0';
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
//freopen("output.txt", "w", stdout);
    ll pow[100];
    pow[0]=1;
    pow[1]=2;
    for(int k=2; k<=40; k++)
    {
        pow[k]=pow[k-1]*2;
    }
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        string s=make_bin(n);
        int len=s.length();
        for(i=len-1; i>0; i--)
        {
            if(s[i]=='1' && s[i-1]=='0')
            {
                s[i]='0';
                s[i-1]='1';
                break;
            }
        }
        j=i;
        int k=len-1;
        while(j<len && k>i && j<k)
        {
            if(s[j]=='1' && s[k]=='0')
            {
                //cout<<j<<" "<<k<<endl;
                //co(s)
                swap(s[j],s[k]);
                k--;
            }
            j++;
        }
        //co(s)
        int val=0;
        for(i=0,j=len-1; i<len; i++,j--)
        {
            val+=(pow[j])*(s[i]-48);
            // co(val)
        }
        printf("Case %d: ",cs++);
        co(val)
    }





    return 0;
}


