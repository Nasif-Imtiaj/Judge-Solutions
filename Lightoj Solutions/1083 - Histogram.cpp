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
int n;
struct tree
{
    int minimum_value,indx;
} segment_tree[262144];
void Construct_Tree(int low,int high,int pos)
{
    if(low==high)
    {
        segment_tree[pos].minimum_value=arr[low];
        segment_tree[pos].indx=low;
        return ;
    }
    int mid=(low+high)/2;
    Construct_Tree(low,mid,pos*2+1);
    Construct_Tree(mid+1,high,pos*2+2);
    int leftt,rightt;
    leftt=segment_tree[2*pos+1].minimum_value;
    rightt=segment_tree[2*pos+2].minimum_value;
    if(leftt<rightt)
    {
        segment_tree[pos].minimum_value=segment_tree[2*pos+1].minimum_value;
        segment_tree[pos].indx=segment_tree[2*pos+1].indx;
    }
    else
    {
        segment_tree[pos].minimum_value=segment_tree[2*pos+2].minimum_value;
        segment_tree[pos].indx=segment_tree[2*pos+2].indx;
    }
}
pair<int,int> Range_min_query(int st,int en,int low,int high,int pos)
{
    if(st<=low && en>=high)
        return make_pair(segment_tree[pos].minimum_value,segment_tree[pos].indx);
    if(st>high || en<low)
        return make_pair(INT_MAX,-1);// no overlap
    int mid=(low+high)/2;
    pair<int,int>leftt;
    pair<int,int>rightt;
    leftt=Range_min_query(st,en,low,mid,2*pos+1);
    rightt=Range_min_query(st,en,mid+1,high,2*pos+2);
    if(leftt.first<rightt.first)
        return leftt;
    else
        return rightt;
}
int divide_conqure(int l,int r)
{
    if(l>r)
        return -999999;
    if(l==r)
        return arr[l];
    pair<int,int>minimum_value_with_index;
    minimum_value_with_index=Range_min_query(l,r,0,n-1,0);
    int value,position;
    value=minimum_value_with_index.first;
    position=minimum_value_with_index.second;
    int part1=(r-l+1)*value;
    int part2=divide_conqure(l,position-1);
    int part3=divide_conqure(position+1,r);
    //cout<<l<<" "<<r<<endl;
    // cout<<value<<" "<<position<<" "<<part1<<" "<<part2<<" "<<part3<<endl;
    return max(part1,max(part2,part3));
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,q,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        Construct_Tree(0,n-1,0);
        // pair<int,int>check;
        //check=Range_min_query(0,4,0,4,0);
        printf("Case %d: ",cs++);
        printf("%d\n",divide_conqure(0,n-1));
    }
    return 0;
}


