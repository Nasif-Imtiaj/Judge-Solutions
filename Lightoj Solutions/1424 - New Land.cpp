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
int arr[100005],n,m;
char grid[2005][2005];
struct tree
{
    int value,pos;
} segment_tree[262144],Con;
tree Range_min_query(int st,int en,int low,int high,int pos)
{
    if(st<=low && en>=high){
        return segment_tree[pos];//total overlap
    }
    if(st>high || en<low)
        return Con;// no overlap

    int mid=(low+high)/2;
    tree l=Range_min_query(st,en,low,mid,2*pos+1);
    tree r=Range_min_query(st,en,mid+1,high,2*pos+2);
    if(l.value<r.value)
        return l;
    else
        return r;
}
void update(int low,int high,int pos,int idx,ll val)
{
    if(low>high || idx<low || idx>high)
        return;
    if(low==high && low==idx)
    {
        segment_tree[pos].value=val;
        segment_tree[pos].pos=low;
        return ;
    }
    int a,b,mid;
    mid=(low+high)/2;
    update(low,mid,pos*2+1,idx,val);
    update(mid+1,high,pos*2+2,idx,val);
    if(segment_tree[pos*2+1].value<segment_tree[pos*2+2].value){
        segment_tree[pos].value=segment_tree[pos*2+1].value;
        segment_tree[pos].pos=segment_tree[pos*2+1].pos;
    }
    else{
        segment_tree[pos].value=segment_tree[pos*2+2].value;
        segment_tree[pos].pos=segment_tree[pos*2+2].pos;
    }
}
int divide_conqure(int l,int r)
{
    if(l>r)
        return -9999;
    if(l==r)
        return arr[l];
    tree cur=Range_min_query(l,r,0,m-1,0);
    int p1=(r-l+1)*cur.value;
    int p2=divide_conqure(l,cur.pos-1);
    int p3=divide_conqure(cur.pos+1,r);
    return max(p1,max(p2,p3));
}
int main()
{
//freopen("output.txt", "w", stdout);
    Con.value=INT_MAX;
    Con.pos=-19999;
    int t;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        int mx=0;
        scanf("%d %d",&n,&m);
        getchar();
        for(int i=0; i<n; i++)
            scanf("%s",grid[i]);
        getchar();
        for(int i=0; i<m; i++)
            arr[i]=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]=='0')
                    arr[j]++;
                else
                    arr[j]=0;
                update(0,m-1,0,j,arr[j]);
            }
          mx=max(mx,divide_conqure(0,m-1));
        }
        printf("Case %d: %d\n",cs,mx);
    }
    return 0;
}

