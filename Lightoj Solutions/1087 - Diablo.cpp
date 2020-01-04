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
const int sz = 150005;
int arr[sz],segment_tree[524288],availabe[sz],pos;
int t,n,q,cs=1,i;
void Construct_Tree(int low,int high,int pos)
{
    if(low==high)
    {
        segment_tree[pos]=1;
        return ;
    }
    int mid=(low+high)/2;
    Construct_Tree(low,mid,pos*2+1);
    Construct_Tree(mid+1,high,pos*2+2);
    segment_tree[pos]=(segment_tree[2*pos+1]+segment_tree[2*pos+2]);
}
int Range_sum_query(int st,int en,int low,int high,int pos)
{

    if(st<=low && en>=high)
        return segment_tree[pos];//total overlap

    if(st>high || en<low)
        return 0;// no overlap

    int mid=(low+high)/2;

    return (Range_sum_query(st,en,low,mid,2*pos+1)+Range_sum_query(st,en,mid+1,high,2*pos+2));
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
    segment_tree[pos]=(segment_tree[a]+segment_tree[b]);
}
int indx_search(int l,int r,int value)
{
    //cout<<l<<"     "<<r<<endl;
    int mid=(l+r)/2;

    int check=Range_sum_query(0,mid,0,sz-1,0);
    //cout<<check<<" mid   "<<mid<<endl;
    if(check>value)
        indx_search(l,mid-1,value);
    else if(check<value)
        indx_search(mid+1,r,value);
    else
    {
        if(availabe[mid]==1)
            return mid;
        else
            indx_search(l,mid-1,value);
    }
}
int main()
{
   // freopen("output.txt", "w", stdout);
    scanf("%d",&t);
    while(t--)
    {
        fill(segment_tree,segment_tree+400000,0);
        fill(availabe,availabe+sz,0);
        scanf("%d %d",&n,&q);
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            availabe[i]=1;
        }
        Construct_Tree(0,sz-1,0);
        getchar();
        pos=n;
        //cout<<Range_sum_query(0,0,0,(n-1)*2,0)<<endl;;
        printf("Case %d:\n",cs++);
        int numbers=n;
        while(q--)
        {
            char type[2];
            int command,location;
            scanf("%s %d",type,&command);
            if(type[0]=='a')
            {
                numbers++;
                arr[pos]=command;
                availabe[pos]=1;
                pos++;
            }
            else
            {
                if(command>numbers)
                {
                    printf("none\n");
                    continue;
                }
                numbers--;
                location=indx_search(0,pos-1,command);
                // cout<<"loc   "<<location<<endl;
                printf("%d\n",arr[location]);
                availabe[location]=0;
                update(0,sz-1,0,location,0);
            }
        }
    }
    return 0;
}


