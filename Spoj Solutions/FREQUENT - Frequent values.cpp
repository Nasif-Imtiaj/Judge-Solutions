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
    int l=0,r=0,l_cnt=0,r_cnt=0,ans=0;
} segment_tree[262144];
tree combine(tree L,tree R)
{
    tree res;
    res.l=L.l;
    res.r=R.r;
    res.r_cnt=R.r_cnt;
    res.ans=max(L.ans,R.ans);
    if(L.l==L.r && L.r==R.l )
    {
        res.l_cnt=L.r_cnt+R.l_cnt;
    }
    else
        res.l_cnt=L.l_cnt;
    if(L.r==R.l && R.l==R.r)
    {
        res.r_cnt=L.r_cnt+R.l_cnt;
    }
    else
        res.r_cnt=R.r_cnt;
    if(L.r==R.l)
    {
        //  cout<<L.r_cnt<< "    "<<R.l_cnt<<endl;
        res.ans=max(res.ans,L.r_cnt+R.l_cnt);
    }
    return res;
}
void Construct_Tree(int low,int high,int pos)
{
    if(low==high)
    {
        segment_tree[pos].l=arr[low];
        segment_tree[pos].l_cnt=1;
        segment_tree[pos].r=arr[low];
        segment_tree[pos].r_cnt=1;
        segment_tree[pos].ans=1;
        return ;
    }
    int mid=(low+high)/2;
    Construct_Tree(low,mid,pos*2+1);
    Construct_Tree(mid+1,high,pos*2+2);
    segment_tree[pos]=combine(segment_tree[pos*2+1],segment_tree[pos*2+2]);
}
tree Range_min_query(int st,int en,int low,int high,int pos)
{

    if(st<=low && en>=high)
        return segment_tree[pos];//total overlap

    if(st>high || en<low)
    {
        tree a;
        a.l=0;
        a.r=0;
        a.l_cnt=0;
        a.r_cnt=0;
        a.ans=0;
        return a;
    }
    int mid=(low+high)/2;
    tree l,r,res;
    l=Range_min_query(st,en,low,mid,2*pos+1);
    r=Range_min_query(st,en,mid+1,high,2*pos+2);
    res=combine(l,r);
    return res;
}
int main()
{
//freopen("output.txt", "w", stdout);

    int n,q;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        scanf("%d",&q);
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        Construct_Tree(0,n-1,0);
        while(q--)
        {
            int l,r;
            scanf("%d %d",&l,&r);
            tree ans=Range_min_query(l-1,r-1,0,n-1,0);
            printf("%d\n",ans.ans);
        }
    }
    return 0;
}
