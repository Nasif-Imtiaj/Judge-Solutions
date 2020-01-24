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
ll arr[12],mx;
string mx_sln;
int taken[15];
void recur(int pos,ll sum,int used[],string ans)
{
    if(pos>=9)
    {
        if(sum>mx)
        {

            mx=sum;
            mx_sln=ans;
        }
        else if(sum==mx){
            if(ans<mx_sln)
                mx_sln=ans;
        }
    }
    for(int i=0; i<3; i++)
    {
        if(used[i]==0)
        {
            used[i]=1;
            if(i==0)
                ans+='B';
            else if(i==1)
                ans+='G';
            else
                ans+='C';
            recur(pos+3,sum+arr[i+pos],used,ans);
            used[i]=0;
            ans.pop_back();
        }
    }
}
int main()
{
//freopen("output.txt", "w", stdout);
    ll a;
    while(scanf("%lld",&a)!=EOF)
    {
        ll sum=a;
        for(int i=1; i<9; i++)
        {
            scanf("%lld",&arr[i]);
            sum+=arr[i];
        }
        arr[0]=a;
        mx=0;
        string s="";
        recur(0,0,taken,s);
        cout<<mx_sln<<" "<<sum-mx<<endl;
    }

    return 0;
}
