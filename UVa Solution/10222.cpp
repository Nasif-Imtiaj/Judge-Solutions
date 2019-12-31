#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int main()
{
//freopen("output.txt", "w", stdout);
    string one,two,three,four,s;

    int i,a,j;

    one="`1234567890-=";
    two="qwertyuiop[]";
    three="asdfghjkl;'";
    four="zxcvbnm,./";


    getline(cin,s);

    for(i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        s[i]+=32;
        for(j=2; j<one.length(); j++)
        {
            if(s[i]==one[j])
                s[i]=one[j-2];
        }
        for(j=2; j<two.length(); j++)
        {
            if(s[i]==two[j])
                s[i]=two[j-2];
        }
        for(j=2; j<three.length(); j++)
        {
            if(s[i]==three[j])
                s[i]=three[j-2];
        }
        for(j=2; j<four.length(); j++)
        {
            if(s[i]==four[j])
                s[i]=four[j-2];
        }
        if(s[i]==92)
            s[i]=';';
    }
    co(s);



    return 0;
}
