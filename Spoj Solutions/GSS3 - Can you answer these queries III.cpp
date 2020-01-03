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
struct tree
{
    int presum,sufsum,totalsum,mxsum;
} segment_tree[262144];
tree combine(tree l,tree r)
{
    tree res;
    res.totalsum=(l.totalsum+r.totalsum);
    res.presum=max(l.presum,l.totalsum+r.presum);
    res.sufsum=max(r.sufsum,r.totalsum+l.sufsum);
    res.mxsum=max(max(l.mxsum,r.mxsum),l.sufsum+r.presum);
    return res;
}
void Construct_Tree(int low,int high,int pos)
{
    if(low==high)
    {
        segment_tree[pos].totalsum=arr[low];
        segment_tree[pos].presum=arr[low];
        segment_tree[pos].sufsum=arr[low];
        segment_tree[pos].mxsum=arr[low];
        return ;
    }
    int mid=(low+high)/2;
    Construct_Tree(low,mid,pos*2+1);
    Construct_Tree(mid+1,high,pos*2+2);
    segment_tree[pos]=combine(segment_tree[2*pos+1],segment_tree[2*pos+2]);
}
tree Range_sum_query(int st,int en,int low,int high,int pos)
{
    if(st<=low && en>=high)
        return segment_tree[pos];//total overlap
    if(st>high || en<low)
    {
        tree a;
        a.mxsum=-15607;
        a.sufsum=-15607;
        a.presum=-15607;
        a.totalsum=-15607;
        return a;
    }
    int mid=(low+high)/2;
    tree l,r,res;
    l=Range_sum_query(st,en,low,mid,2*pos+1);
    r=Range_sum_query(st,en,mid+1,high,2*pos+2);
    res=combine(l,r);
    return res;
}
void update(int low,int high,int pos,int idx,int val)
{
    if(low>high || idx<low || idx>high)
        return;
    if(low==high && low==idx)
    {
        segment_tree[pos].totalsum=val;
        segment_tree[pos].presum=val;
        segment_tree[pos].sufsum=val;
        segment_tree[pos].mxsum=val;
        return ;
    }
    int a,b,mid;
    mid=(low+high)/2;
    update(low,mid,pos*2+1,idx,val);
    update(mid+1,high,pos*2+2,idx,val);
    segment_tree[pos]=combine(segment_tree[pos*2+1],segment_tree[pos*2+2]);
}
int main()
{
//freopen("output.txt", "w", stdout);
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    Construct_Tree(0,n-1,0);
    int st,en,q;
    scanf("%d",&q);
    while(q--)
    {
        int a;
        scanf("%d",&a);

        scanf("%d %d",&st,&en);
        if(a==0)
            update(0,n-1,0,st-1,en);
        else
        {
            tree ans=Range_sum_query(st-1,en-1,0,n-1,0);
            printf("%d\n",ans.mxsum);
        }
    }

    return 0;
}
