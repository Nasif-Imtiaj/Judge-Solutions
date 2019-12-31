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
int main()
{
//freopen("output.txt", "w", stdout);
    map<char,int>store;
    store['A']=0;
    store['E']=0;
    store['I']=0;
    store['O']=0;
    store['U']=0;
    store['H']=0;
    store['W']=0;
    store['Y']=0;
    store['B']=1;
    store['F']=1;
    store['P']=1;
    store['V']=1;
    store['C']=2;
    store['G']=2;
    store['J']=2;
    store['K']=2;
    store['Q']=2;
    store['X']=2;
    store['Z']=2;
    store['S']=2;
    store['D']=3;
    store['T']=3;
    store['L']=4;
    store['M']=5;
    store['N']=5;
    store['R']=6;
    string s;
    while(cin>>s)
    {
        if(store[s[0]]!=0)cout<<store[s[0]];
        for(int i=1; i<s.length(); i++)
        {
           if(store[s[i]]!=store[s[i-1]] && store[s[i]]!=0) cout<<store[s[i]];
        }
        cout<<endl;
    }
    return 0;
}
