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
int main()
{
//freopen("output.txt", "w", stdout);

    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n+2];
        vector<pair<int,int> >v;
        v.push_back(make_pair(0,0));
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
            v.push_back(make_pair(arr[i],i));
        }
        sort(v.begin(),v.end());
        int sw=0;
        for(int i=1; i<=n; i++)
        {
            if(v[i].second==i)
                continue;
            else
            {
                swap(v[i].first,v[v[i].second].first);
                swap(v[i].second,v[v[i].second].second);
            }
            if(i!=v[i].second)
                i--;
            sw++;
        }
        printf("Case %d: %d\n",cs++,sw);
    }






    return 0;
}

