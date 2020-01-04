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
int getSum(int BITree[], int index)
{
    int sum = 0;
    index = index + 1;
    while (index>0)
    {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}
void updateBIT(int BITree[], int n, int index, int val)
{
    index = index + 1;
    while (index <= n)
    {
        BITree[index] += val;
        index += index & (-index);
    }
}
int sum(int x, int BITTree1[], int BITTree2[])
{
    return (getSum(BITTree1, x) * x) - getSum(BITTree2, x);
}
void updateRange(int BITTree1[], int BITTree2[], int n,
                 int val, int l, int r)
{
    updateBIT(BITTree1,n,l,val);
    updateBIT(BITTree1,n,r+1,-val);
    updateBIT(BITTree2,n,l,val*(l-1));
    updateBIT(BITTree2,n,r+1,-val*r);
}

int rangeSum(int l, int r, int BITTree1[], int BITTree2[])
{
    return sum(r, BITTree1, BITTree2) -
           sum(l-1, BITTree1, BITTree2);
}
int *constructBITree(int n)
{
    int *BITree = new int[n+1];
    for (int i=1; i<=n; i++)
        BITree[i] = 0;

    return BITree;
}
int main()
{
    //freopen("output.txt", "w", stdout);

    int t,q,cs=1;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int n,q,i,query[50005];
        map<int,int>arr;
        vector<pair<int,int> >store;
        int *BITTree1, *BITTree2;

        set<int>s;
        set<int>:: iterator it;
        int a,b;
       scanf("%d %d",&n,&q);
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&a,&b);
            s.insert(a);
            s.insert(b);
            store.push_back(make_pair(a,b));
        }
        for(i=0; i<q; i++)
        {
            scanf("%d",&a);
            s.insert(a);
            query[i]=a;
        }

        i=0;
        for(it=s.begin(); it!=s.end(); ++it)
        {
            // cout<<*it<<"       "<<i<<endl;
            arr[*it]=i;
            i++;
        }
        int sz=arr.size();
        BITTree1 = constructBITree(sz);
        BITTree2 = constructBITree(sz);
        for(i=0; i<n; i++)
        {
            int l,r;
            l=store[i].first;
            r=store[i].second;
            updateRange(BITTree1,BITTree2,sz,1,arr[l],arr[r]);
        }
        printf("Case %d:\n",cs++);
        for(i=0; i<q; i++)
        {
            int ans=rangeSum(arr[query[i]],arr[query[i]],BITTree1,BITTree2);
            printf("%d\n",ans);
        }
    }
    return 0;
}


