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
    int idx,mx;
} segment_tree[262144];
void Construct_Tree(int low,int high,int pos)
{
    if(low==high)
    {
        segment_tree[pos].mx=arr[low];
        segment_tree[pos].idx=low;
        return ;
    }
    int mid=(low+high)/2;
    Construct_Tree(low,mid,pos*2+1);
    Construct_Tree(mid+1,high,pos*2+2);
    if(segment_tree[2*pos+1].mx>segment_tree[2*pos+2].mx)
    {
        segment_tree[pos].mx=segment_tree[2*pos+1].mx;
        segment_tree[pos].idx=segment_tree[2*pos+1].idx;
    }
    else
    {
        segment_tree[pos].mx=segment_tree[2*pos+2].mx;
        segment_tree[pos].idx=segment_tree[2*pos+2].idx;
    }
}
pair<int,int> Range_max_query(int st,int en,int low,int high,int pos)
{

    if(st<=low && en>=high)
        return make_pair(segment_tree[pos].mx,segment_tree[pos].idx);//total overlap

    if(st>high || en<low)
        return make_pair(0,-1);// no overlap

    int mid=(low+high)/2;
    pair<int,int>l,r;
    l=Range_max_query(st,en,low,mid,2*pos+1);
    r=Range_max_query(st,en,mid+1,high,2*pos+2);
    if(l.first>r.first)
        return l;
    else
        return r;
}
int main()
{
//freopen("output.txt", "w", stdout);

    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,c,q;
        scanf("%d %d %d",&n,&c,&q);
        int i;
        int houses[n+2];
        for(i=0; i<n; i++)
            scanf("%d",&houses[i]);
        arr[0]=1;
        for(i=1; i<n; i++)
            if(houses[i]==houses[i-1])
                arr[i]=arr[i-1]+1;
            else
                arr[i]=1;
        Construct_Tree(0,n-1,0);
        printf("Case %d:\n",cs++);
        while(q--)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            pair<int,int>ans;
            a--;
            b--;
            ans=Range_max_query(a,b,0,n-1,0);
            int mx=ans.first;
            int res=0;
            int flg=0;
            int temp=ans.second;
            while((temp-a)+1<mx && a<=b)
            {
                res=max((temp-a)+1,res);
                flg=1;
                a=temp+1;
                ans=Range_max_query(a,b,0,n-1,0);
                mx=ans.first;
                temp=ans.second;
            }
            if(a>b)
                printf("%d\n",res);
            else{
                if(flg==0)
                printf("%d\n",mx);
               else{
                res=max(mx,res);
                printf("%d\n",res);
               }
            }
        }

    }
    return 0;
}


