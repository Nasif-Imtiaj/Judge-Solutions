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
int arr[200005];
struct tree
{
    int a,b;
} segment_tree[462144];
pair<int,int> pair_max(int a,int b,int c,int d)
{
    int arr[4];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    sort(arr,arr+4);
    return make_pair(arr[2],arr[3]);
}
void Construct_Tree(int low,int high,int pos)
{
    if(low==high)
    {
        segment_tree[pos].a=arr[low];
        segment_tree[pos].b=0;
        return ;
    }
    int mid=(low+high)/2;
    Construct_Tree(low,mid,pos*2+1);
    Construct_Tree(mid+1,high,pos*2+2);
    pair<int,int>a_b=pair_max(segment_tree[2*pos+1].a,segment_tree[2*pos+1].b,segment_tree[2*pos+2].a,segment_tree[2*pos+2].b);
   // cout<<" "<<segment_tree[2*pos+1].a<<" "<<segment_tree[2*pos+1].b<<" "<<segment_tree[2*pos+2].a<<" "<<segment_tree[2*pos+2].b<<endl;
    //cout<<a_b.first<<" "<<a_b.second<<endl;
    segment_tree[pos].a=a_b.first;
    segment_tree[pos].b=a_b.second;
}
pair<int,int> Range_sum_query(int st,int en,int low,int high,int pos)
{
    if(st<=low && en>=high)
    {
       // cout<<low<<" "<<high<<endl;
    //cout<<pos<<" "<<segment_tree[pos].a<<" "<<segment_tree[pos].b<<endl;
        return make_pair(segment_tree[pos].a,segment_tree[pos].b);//total overlap
    }
    if(st>high || en<low)
        return make_pair(0,0);// no overlap
    int mid=(low+high)/2;
    pair<int,int>l,r;
    l=Range_sum_query(st,en,low,mid,2*pos+1);
    r=Range_sum_query(st,en,mid+1,high,2*pos+2);
    return pair_max(l.first,l.second,r.first,r.second);
}
void update(int low,int high,int pos,int idx,ll val)
{
    if(low>high || idx<low || idx>high)
        return;
    if(low==high && low==idx)
    {
        segment_tree[pos].a=val;
        segment_tree[pos].b=0;
        return ;
    }
    int a,b,mid;
    mid=(low+high)/2;
    update(low,mid,pos*2+1,idx,val);
    update(mid+1,high,pos*2+2,idx,val);
    a=pos*2+1;
    b=pos*2+2;
    pair<int,int>a_b=pair_max(segment_tree[2*pos+1].a,segment_tree[2*pos+1].b,segment_tree[2*pos+2].a,segment_tree[2*pos+2].b);
    segment_tree[pos].a=a_b.first;
    segment_tree[pos].b=a_b.second;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int n,q;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    Construct_Tree(0,n-1,0);
    int st,en;

    scanf("%d",&q);

    while(q--)
    {
        char x;
        getchar();
        scanf("%c",&x);
        scanf("%d %d",&st,&en);
        if(x=='Q')
        {
            pair<int,int>ans=Range_sum_query(st-1,en-1,0,n-1,0);
            printf("%d\n",ans.first+ans.second);
        }
        else
            update(0,n-1,0,st-1,en);
    }

    return 0;
}
