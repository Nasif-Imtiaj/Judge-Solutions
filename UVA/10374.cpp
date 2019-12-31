#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int main()
{
//  freopen("output.txt", "w", stdout);
    map<string,string>election;
    map<string,string>:: iterator it;
    map<string,int>votes;

    string x,y,ans;
    int a,b,c,t,tie=0,up=-1;
    cin>>t;
    while(t--)
    {
        cin>>a;
        while(getchar()!='\n');
        while(a--)
        {
            getline(cin,x);
            getline(cin,y);
            election[x]=y;
        }
        cin>>b;
        while(getchar()!='\n');
        while(b--)
        {
            getline(cin,x);
            votes[x]++;
        }
        tie=0;
        up=-1;
        ans="";
        for(it=election.begin(); it!=election.end(); ++it)
        {
            x=it->first;
            c=votes[x];
            if(c>up)
            {
                up=c;
                tie=1;
                ans=it->second;
            }
            else if(c==up)
                tie++;
        }
        if(tie==1)
            cout<<ans<<endl;
        else
            cout<<"tie"<<endl;
        election.clear();
        votes.clear();

        if(t>0)
            cout<<endl;
    }
    return 0;
}
