#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define bug cout<<"bug"<<endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
ll arr[120005],segment_tree[362144],cur_sum;
int n,q;
void Construct_Tree(int low,int high,int pos)
{
    if(low==high)
    {
        segment_tree[pos]=arr[low];
        return ;
    }
    int mid=(low+high)/2;
    Construct_Tree(low,mid,pos*2+1);
    Construct_Tree(mid+1,high,pos*2+2);
    segment_tree[pos]=segment_tree[2*pos+1]+segment_tree[2*pos+2];
}
ll Range_sum_query(int st,int en,int low,int high,int pos)
{

    if(st<=low && en>=high)
        return segment_tree[pos];//total overlap

    if(st>high || en<low)
        return 0;// no overlap

    int mid=(low+high)/2;

    return (Range_sum_query(st,en,low,mid,2*pos+1)+Range_sum_query(st,en,mid+1,high,2*pos+2));
}
void update(int low,int high,int pos,int idx,ll val)
{
    if(low>high || idx<low || idx>high)
        return;
    if(low==high && low==idx)
    {
        segment_tree[pos]=val;
        return ;
    }
    int a,b,mid;
    mid=(low+high)/2;
    update(low,mid,pos*2+1,idx,val);
    update(mid+1,high,pos*2+2,idx,val);
    a=pos*2+1;
    b=pos*2+2;
    segment_tree[pos]=(segment_tree[a]+segment_tree[b]);
}
void update_cur_sum(ll pos,ll val)
{
    ll l,r,x,y,z;
    l=Range_sum_query(0,pos-1,0,n-1,0);
    r=arr[pos]*(pos);
    z=l-r;
    cur_sum-=z;
    r=val*pos;
    z=l-r;
    cur_sum+=z;
    x=Range_sum_query(pos+1,n-1,0,n-1,0);
    y=arr[pos]*(n-pos-1);
    z=y-x;
    cur_sum-=z;
    y=val*(n-pos-1);
    z=y-x;
    cur_sum+=z;
    arr[pos]=val;
    update(0,n-1,0,pos,val);
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
    {
        scanf("%d %d",&n,&q);
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        cur_sum=0;
        Construct_Tree(0,n-1,0);
        for(int i=0; i<n; i++)
        {
            ll x,y,new_sum;
            x=arr[i]*(n-i-1);
            y=Range_sum_query(i+1,n-1,0,n-1,0);
            new_sum=x-y;
            cur_sum+=new_sum;
        }
        printf("Case %d:\n",k);
        while(q--)
        {
            ll a,b;
            scanf("%lld",&a);
            if(a==0)
            {
                scanf("%lld %lld",&a,&b);
                update_cur_sum(a,b);
            }
            else
                printf("%lld\n",cur_sum);
        }
    }

    return 0;
}
