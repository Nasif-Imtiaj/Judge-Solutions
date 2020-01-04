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
int lazy[262144],arr[100005];
struct tree
{
    int zero,one,two;
} segment_tree[262144];
void build_segment_tree(int low,int high,int pos)
{
    if(low==high)
    {
        segment_tree[pos].zero=1;
        segment_tree[pos].one=0;
        segment_tree[pos].two=0;
        return;
    }
    int mid=(low+high)/2;
    build_segment_tree(low,mid,2*pos+1);
    build_segment_tree(mid+1,high,2*pos+2);
    segment_tree[pos].zero=segment_tree[pos*2+1].zero+segment_tree[pos*2+2].zero;
    segment_tree[pos].one=segment_tree[pos*2+1].one+segment_tree[pos*2+2].one;
    segment_tree[pos].two=segment_tree[pos*2+1].two+segment_tree[pos*2+2].two;
}
void lazypropagate(int low,int high,int pos)
{
    if(low!=high)
    {
        lazy[pos*2+1]+=lazy[pos];
        lazy[pos*2+2]+=lazy[pos];
    }
    lazy[pos]%=3;
    while(lazy[pos]--)
    {
        int temp=segment_tree[pos].two;
        segment_tree[pos].two=segment_tree[pos].one;
        segment_tree[pos].one=segment_tree[pos].zero;
        segment_tree[pos].zero=temp;
    }
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
      //  cout<<st<<"     "<<en<<endl;
        int temp=segment_tree[pos].two;
        segment_tree[pos].two=segment_tree[pos].one;
        segment_tree[pos].one=segment_tree[pos].zero;
        segment_tree[pos].zero=temp;
        lazy[pos]+=val;
        if(low!=high)
        {
            lazy[pos*2+1]+=lazy[pos];
            lazy[pos*2+2]+=lazy[pos];
        }
        lazy[pos]=0;
        return ;
    }
    int mid=(low+high)/2;
    lazy_range_update(st,en,low,mid,pos*2+1,val);
    lazy_range_update(st,en,mid+1,high,pos*2+2,val);
    segment_tree[pos].zero=segment_tree[pos*2+1].zero+segment_tree[pos*2+2].zero;
    segment_tree[pos].one=segment_tree[pos*2+1].one+segment_tree[pos*2+2].one;
    segment_tree[pos].two=segment_tree[pos*2+1].two+segment_tree[pos*2+2].two;
    //cout<<segment_tree[pos].zero<<"  "<<segment_tree[pos].one<< "  "<<segment_tree[pos].two<<endl;
}
int lazy_range_query(int st,int en,int low,int high,int pos)
{
    if(lazy[pos]>0)
        lazypropagate(low,high,pos);
    if(st>high || en<low)
        return 0;// no overlap
    if(st<=low && en>=high )
        return segment_tree[pos].zero;
    int mid=(low+high)/2;
    int left_side=lazy_range_query(st,en,low,mid,pos*2+1);
    int right_side=lazy_range_query(st,en,mid+1,high,pos*2+2);
    return left_side+right_side;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,n,q,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&q);
        int command,x,y,v;
        fill(lazy,lazy+262144,0);
        build_segment_tree(0,n-1,0);
        printf("Case %d:\n",cs++);
        while(q--)
        {
            scanf("%d",&command);
            if(command==0)
            {
                scanf("%d %d",&x,&y);
                lazy_range_update(x,y,0,n-1,0,1);
            }
            else
            {
                scanf("%d %d",&x,&y);
                ll ans=lazy_range_query(x,y,0,n-1,0);
                printf("%d\n",ans);
            }
        }
    }
    return 0;
}


