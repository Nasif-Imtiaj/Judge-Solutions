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
int X[1000000];
int dot[1000000];
int X_pos,dot_pos;
int bs_lower_bound(int val)
{
    int l=0,r=X_pos-1;
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(X[mid]<val)
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else
            r=mid-1;
    }
    return ans;
}
int bs_upper_bound(int val)
{
    int l=0,r=X_pos-1;
    int ans=INT_MAX;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(X[mid]>val)
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);
    string s;
    while(cin>>s)
    {
        int mx=0;
        int len=s.length();
        X_pos=0;
        dot_pos=0;
        for(int i=0; i<len; i++)
            if(s[i]=='X')
                X[X_pos++]=i+1;
            else
                dot[dot_pos++]=i+1;

        for(int i=0; i<dot_pos; i++)
        {
            int l=bs_lower_bound(dot[i]);
            int r=bs_upper_bound(dot[i]);
            if(l==-1)
                l=INT_MAX;
            else
            {
                // cout<<dot[i]<<" "<<X[l]<<" "<<l<<" "<<i<<endl;
                l=dot[i]-X[l]-1;
            }
            if(r!=INT_MAX)
                r=X[r]-dot[i]-1;
            //cout<<l<<" "<<r<<endl;
            mx=max(mx,min(l,r));
        }
        printf("%d\n",mx);
    }

    return 0;
}
