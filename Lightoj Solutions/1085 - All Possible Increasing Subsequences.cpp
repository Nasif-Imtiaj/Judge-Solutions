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
int arr[100005];
ll segment_tree[262144];
ll m=1000000007;
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
ll Range_sum_query(int st,int en,int low,int high,int pos)
{
    if(st<=low && en>=high)
        return segment_tree[pos]%m;//total overlap
    if(st>high || en<low)
        return 0;// no overlap
    int mid=(low+high)/2;
    return (Range_sum_query(st,en,low,mid,2*pos+1)%m+Range_sum_query(st,en,mid+1,high,2*pos+2)%m)%m;
}
void update(int low,int high,int pos,int idx,ll val)
{
    if(low>high || idx<low || idx>high)
        return;
    if(low==high && low==idx)
    {
        segment_tree[pos]=val%m;
        return ;
    }
    int a,b,mid;
    mid=(low+high)/2;
    update(low,mid,pos*2+1,idx,val);
    update(mid+1,high,pos*2+2,idx,val);
    a=pos*2+1;
    b=pos*2+2;
    segment_tree[pos]=(segment_tree[a]%m+segment_tree[b]%m)%m;
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        vector<pair<int,int> >store;
        fill(segment_tree,segment_tree+262144,0);
        int n,i,j;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            store.push_back(make_pair(arr[i],i));
        }
        sort(store.begin(),store.end(),cmp);
        for(i=0; i<n; i++)
        {
            ll value=Range_sum_query(0,store[i].second,0,n-1,0)%m;
            update(0,n-1,0,store[i].second,value+1);
        }
        printf("Case %d: ",cs++);
        cout<<(Range_sum_query(0,n-1,0,n-1,0))%m<<endl;

    }
    return 0;
}


