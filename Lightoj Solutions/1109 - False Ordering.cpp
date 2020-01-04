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
vector<pair<int,int> >reorder;
bool cmp(pair<int,int>&l,pair<int,int>&r)
{
    if(l.first<r.first)
        return 1;
    if(l.first>r.first)
        return 0;
    if(l.second>r.second)
        return 1;
    else
        return 0;
}
void div(int a)
{
    int z=0,b,i;
    for(i=1; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            b=a/i;
            if(b!=i)
                z+=2;
            else
                z++;
        }
    }
    reorder.push_back(make_pair(z,a));
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1,i;
    for(i=1; i<=1000; i++)
        div(i);
    sort(reorder.begin(),reorder.end(),cmp);
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        printf("Case %d: ",cs++);
        cout<<reorder[a-1].second<<endl;
    }




    return 0;
}
