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
int tree[100005];
int arr[100000];
int query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx -= idx & (-idx);
    }
    return sum;
}
void update(int idx, int x, int n) //n is the size of the array, x is the number to add
{
    while(idx<=n)
    {
        tree[idx]+=x;
        idx += idx & (-idx);
    }
}
void build(int n)
{
    int i;
    for(i=1; i<=n; i++)
        tree[i]=0;
    for(i=1; i<=n; i++)
    {
        update(i,arr[i],n);
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c,d,t,i,j,m,n,k;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%d %d",&a,&b);
        for(i=1; i<=a; i++)
            scanf("%d",&arr[i]);
        build(a);
        printf("Case %d:\n",k);
        while(b--)
        {
            scanf("%d",&c);
            if(c==1)
            {
                scanf("%d",&m);
                d=query(m+1)-query(m);
                printf("%d\n",d);
                update(m+1,-d,a);
                arr[m+1]=0;
            }
            else if(c==2)
            {
                scanf("%d %d",&m,&n);
                update(m+1,n,a);
            }
            else
            {
                scanf("%d %d",&m,&n);
                d=query(n+1)-query(m);
                printf("%d\n",d);
            }
        }
    }
    return 0;
}
