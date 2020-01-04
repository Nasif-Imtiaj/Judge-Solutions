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
int arr[501][501],segment_tree[1700][1700];
void Construct_Tree(int low,int high,int pos,int row)
{
    if(low==high)
    {
        segment_tree[row][pos]=arr[row][low];
        return ;
    }
    int mid=(low+high)/2;
    Construct_Tree(low,mid,pos*2+1,row);
    Construct_Tree(mid+1,high,pos*2+2,row);
    segment_tree[row][pos]=max(segment_tree[row][2*pos+1],segment_tree[row][2*pos+2]);
}
int Range_max_query(int st,int en,int low,int high,int pos,int row)
{

    if(st<=low && en>=high)
        return segment_tree[row][pos];//total overlap

    if(st>high || en<low)
        return -1;// no overlap

    int mid=(low+high)/2;

    return max(Range_max_query(st,en,low,mid,2*pos+1,row),Range_max_query(st,en,mid+1,high,2*pos+2,row));
}
int main()
{
//freopen("output.txt", "w", stdout);

    int t,n,q,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&q);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                scanf("%d",&arr[i][j]);
            Construct_Tree(0,n-1,0,i);
        }
        int st,en,s;
        printf("Case %d:\n",cs++);
        while(q--)
        {
            scanf("%d %d %d",&st,&en,&s);
            int l=en,r=en+s-1,ans=0;
            for(int i=st; i<=st+s-1; i++)
            {
                // cout<<i<<" "<<l<<"   "<<r<<endl;
                ans=max(Range_max_query(l-1,r-1,0,n-1,0,i-1),ans);
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}


