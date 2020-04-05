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
int arr[3000];
char grid[2005][2005];
int max_area_of_histo(int n)
{
    stack<int>st;
    int mx_area=0;
    for(int i=1; i<=n; i++)
    {
        if(st.empty() || arr[st.top()]<=arr[i])
            st.push(i);
        else
        {
            while(!st.empty() && arr[st.top()]>arr[i])
            {
                int ft=st.top();
                st.pop();
                if(st.size()==0)
                    mx_area=max(mx_area,arr[ft]*(i-1));
                else
                    mx_area=max(mx_area,arr[ft]*(i-st.top()-1));
            }
            st.push(i);
        }
    }
    while(!st.empty())
    {
        int ft=st.top();
        st.pop();
        if(st.size()==0)
            mx_area=max(mx_area,arr[ft]*ft);
        else
            mx_area=max(mx_area,arr[ft]*(ft-st.top()));
    }
    return mx_area;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    for(int cs=1; cs<=t; cs++)
    {
        int mx=0,n,m;
        scanf("%d %d",&n,&m);
        getchar();
        for(int i=0; i<n; i++)
            scanf("%s",grid[i]);
        getchar();
        for(int i=1; i<=m; i++)
            arr[i]=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]=='0')
                    arr[j+1]++;
                else
                    arr[j+1]=0;
            }
            mx=max(mx,max_area_of_histo(m));
        }
        printf("Case %d: %d\n",cs,mx);
    }

    return 0;
}

