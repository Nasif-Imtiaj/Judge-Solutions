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
int arr[100005],segment_tree[262144];
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
    int a=segment_tree[2*pos+1];
    int b=segment_tree[2*pos+2];
    if(a==0 || b==0)
        segment_tree[pos]=0;
    else if(a<0 && b<0)
        segment_tree[pos]=1;
    else
        segment_tree[pos]=min(a,b);
}
int Range_min_query(int st,int en,int low,int high,int pos)
{
    if(st<=low && en>=high)
        return segment_tree[pos];//total overlap
    if(st>high || en<low)
        return INT_MAX;// no overlap
    int mid=(low+high)/2;
    int a,b;
    a=Range_min_query(st,en,low,mid,2*pos+1);
    b=Range_min_query(st,en,mid+1,high,2*pos+2);
    if(a==0 || b==0)
        return 0;
    else if(a<0 && b<0)
        return 1;
    else
        return min(a,b);
}
void update(int low,int high,int pos,int idx,int val)
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
    if(segment_tree[a]==0 || segment_tree[b]==0)
    {
        segment_tree[pos]=0;
    }
    else if(segment_tree[a]<0 && segment_tree[b]<0)
        segment_tree[pos]=1;
    else
        segment_tree[pos]=min(segment_tree[a],segment_tree[b]);
}
int main()
{
    // freopen("output2.txt", "w", stdout);
    int t,n,q;
    while(scanf("%d %d",&n,&q)!=EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        getchar();
        Construct_Tree(0,n-1,0);
        int st,en;
        char x;
        while(q--)
        {
            scanf("%c",&x);
            if(x=='P')
            {
                scanf("%d %d",&st,&en);
                int ans=Range_min_query(st-1,en-1,0,n-1,0);
                if(ans<0)
                    printf("-");
                else if(ans>0)
                    printf("+");
                else
                    printf("0");
            }
            else
            {
                scanf("%d %d",&st,&en);
                update(0,n-1,0,st-1,en);
            }
            getchar();
        }
        printf("\n");
    }
    return 0;
}
