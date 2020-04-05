#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define bug printf("bug\n");
#define bug2(var) cout<<#var<<" "<<var<<endl;
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<pair<int,int> >LiUi[MAX];
vector<int>v;
void ans(string name,int id,int base,int sz,int dim)
{
    int Cd[dim+2];
    Cd[dim]=sz;
    for(int i=dim-1; i>0; i--)
    {
        int liui=LiUi[id][i].second-LiUi[id][i].first+1;
        Cd[i]=Cd[i+1]*liui;
    }
    int C0=base;
    for(int i=1; i<=dim; i++)
        C0-=(Cd[i]*LiUi[id][i-1].first);
    int P_A=C0;
    for(int i=0; i<dim; i++)
    {
        P_A+=(v[i]*Cd[i+1]);
    }
    cout<<name<<"[";
    for(int i=0; i<dim-1; i++)
        cout<<v[i]<<", ";
    cout<<v[dim-1]<<"] = "<<P_A<<endl;;
}
int main()
{
    FastRead
    //freopen("output.txt", "w", stdout);
    int n,m;
    map<string,int>ID;
    cin>>n>>m;
    int base[n+5],sz[n+5],dim[n+5];
    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;
        ID[s]=i;
        cin>>base[i]>>sz[i]>>dim[i];
        for(int j=0; j<dim[i]; j++)
        {
            int a,b;
            cin>>a>>b;
            LiUi[i].push_back(make_pair(a,b));
        }
    }
    while(m--)
    {
        string name;
        cin>>name;
        int id=ID[name],num;
        for(int i=0; i<dim[id]; i++)
        {
            cin>>num;
            v.push_back(num);
        }
        ans(name,id,base[id],sz[id],dim[id]);
        v.clear();
    }
    return 0;
}
