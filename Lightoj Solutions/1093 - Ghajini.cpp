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
int arr[100005],segment_tree_min[262144],segment_tree_max[262144];
void Construct_Tree_MIN(int low,int high,int pos)
{
    if(low==high)
    {
        segment_tree_min[pos]=arr[low];
        return ;
    }
    int mid=(low+high)/2;
    Construct_Tree_MIN(low,mid,pos*2+1);
    Construct_Tree_MIN(mid+1,high,pos*2+2);
    segment_tree_min[pos]=min(segment_tree_min[2*pos+1],segment_tree_min[2*pos+2]);
}
int Range_min_query(int st,int en,int low,int high,int pos)
{

    if(st<=low && en>=high)
        return segment_tree_min[pos];//total overlap

    if(st>high || en<low)
        return INT_MAX;// no overlap

    int mid=(low+high)/2;

    return min(Range_min_query(st,en,low,mid,2*pos+1),Range_min_query(st,en,mid+1,high,2*pos+2));
}
void Construct_Tree_MAX(int low,int high,int pos)
{
    if(low==high)
    {
        segment_tree_max[pos]=arr[low];
        return ;
    }
    int mid=(low+high)/2;
    Construct_Tree_MAX(low,mid,pos*2+1);
    Construct_Tree_MAX(mid+1,high,pos*2+2);
    segment_tree_max[pos]=max(segment_tree_max[2*pos+1],segment_tree_max[2*pos+2]);
}
int Range_MAX_query(int st,int en,int low,int high,int pos)
{

    if(st<=low && en>=high)
        return segment_tree_max[pos];//total overlap

    if(st>high || en<low)
        return -5;// no overlap

    int mid=(low+high)/2;

    return max(Range_MAX_query(st,en,low,mid,2*pos+1),Range_MAX_query(st,en,mid+1,high,2*pos+2));
}
int main()
{
//freopen("output.txt", "w", stdout);

    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,d;
        scanf("%d %d",&n,&d);
        int i;
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        Construct_Tree_MAX(0,n-1,0);
        Construct_Tree_MIN(0,n-1,0);
        int l=0,r=d-1;
        int ans=0,dif;
        while(r<n)
        {
          int mx,mn;
          mx=Range_MAX_query(l,r,0,n-1,0);
          mn=Range_min_query(l,r,0,n-1,0);
          dif=mx-mn;
          //cout<<mx<<" "<<mn<<" "<<l<<"    "<<r<<endl;
          l++;
          r++;
          ans=max(ans,dif);
        }
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}


