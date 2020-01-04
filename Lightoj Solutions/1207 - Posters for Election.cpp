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
ll segment_tree[524288],lazy[524288];
void lazypropagate(int low,int high,int pos)
{
    if(low!=high)
    {
        lazy[pos*2+1]=lazy[pos];
        lazy[pos*2+2]=lazy[pos];
    }
    segment_tree[pos]=((high-low)+1)*lazy[pos];
    lazy[pos]=0;
}
void lazy_range_update(int st,int en,int low,int high,int pos,int val)
{
    if(lazy[pos]>0)
        lazypropagate(low,high,pos);
    if(st>high || en<low)
        return;
    if(st<=low && en>=high)
    {
        segment_tree[pos]=((high-low)+1)*val;
        lazy[pos]=val;
        if(low!=high)
        {
            lazy[pos*2+1]=lazy[pos];
            lazy[pos*2+2]=lazy[pos];
        }
        lazy[pos]=0;
        return ;
    }
    int mid=(low+high)/2;
    lazy_range_update(st,en,low,mid,pos*2+1,val);
    lazy_range_update(st,en,mid+1,high,pos*2+2,val);
    segment_tree[pos]=segment_tree[pos*2+1]+segment_tree[pos*2+2];
}
ll lazy_range_query(int st,int en,int low,int high,int pos)
{
    if(lazy[pos]>0)
        lazypropagate(low,high,pos);
    if(st>high || en<low)
        return 0;// no overlap
    if(st<=low && en>=high )
        return segment_tree[pos];
    ll mid=(low+high)/2;
    ll left_side=lazy_range_query(st,en,low,mid,pos*2+1);
    ll right_side=lazy_range_query(st,en,mid+1,high,pos*2+2);
    return left_side+right_side;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,n,q,cs=1,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        fill(segment_tree,segment_tree+524288,0);
        fill(lazy,lazy+524288,0);
        int l,r,sz;
        sz=n*2;
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&l,&r);
            lazy_range_update(l-1,r-1,0,sz-1,0,i+1);
        }
        set<int>s;
        for(i=0; i<n*2; i++)
        {
            int res=lazy_range_query(i,i,0,sz-1,0);
            if(res==0)
                continue;
            s.insert(res);
        }
        int ans=s.size();
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}


