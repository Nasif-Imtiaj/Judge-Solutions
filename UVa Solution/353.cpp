#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(a) scanf("%d",&a);
#define sl(a) scanf("%ld",&a);
#define sll(a) scanf("%lld",&a);
#define co(a)  cout<<a<<endl;
#define ci(a)  cin>>a;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int palindromeSubStrs(string s)
{
    map<string, int> m;
    int l;
    int n = s.size();
    int R[2][n+1];
    s = "@" + s + "#";
    for (int j = 0; j <= 1; j++)
    {
        int rp = 0;
        R[j][0] = 0;

        int i = 1;
        while (i <= n)
        {
            while (s[i - rp - 1] == s[i + j + rp])
                rp++;
            R[j][i] = rp;
            int k = 1;
            while ((R[j][i - k] != rp - k) && (k < rp))
            {
                R[j][i + k] = min(R[j][i - k],rp - k);
                k++;
            }
            rp = max(rp - k,0);
            i += k;
        }
    }
    s = s.substr(1, n);
    m[string(1, s[0])]=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 1; j++)
            for (int rp = R[j][i]; rp > 0; rp--)
                m[s.substr(i - rp - 1, 2 * rp + j)]=1;
        m[string(1, s[i])]=1;
    }
    l=m.size();
    return l;
}
int main()
{
//freopen("output.txt", "w", stdout);
     int b;
    string s;

    while(cin>>s)
    {
        b=palindromeSubStrs(s);
        cout<<"The string '"<<s<<"' contains "<<b-1<<" palindromes."<<endl;
    }



    return 0;
}
