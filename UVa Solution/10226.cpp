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
    int a,b,c,i,z=0,t;
    double x,y;
    map<string,int>mp;
    map<string,int>:: iterator it;
    string s;
    cin>>t;
    getchar();
    getline(cin,s);
    while(t--)
    {
        while(getline(cin,s))
        {
            if(s.length()==0)
                break;
            mp[s]++;
            z++;
        }
        for(it=mp.begin(); it!=mp.end(); ++it)
        {
            x=it->second;
            y=(double)x/(double)z;
            y*=100;
            cout<<it->first<<" ";
            printf("%.4lf\n",y);
        }
        z=0;
        mp.clear();
        if(t>0)
            cout<<endl;
    }














    return 0;
}
