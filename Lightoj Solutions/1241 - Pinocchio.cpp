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
int ans(int a)
{
    int z=0;
    for(int i=5; i>0; i--)
    {
        z+=a/i;
        a%=i;
    }
    return z;
}
int main()
{
//freopen("output.txt", "w", stdout);

    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int freq[150],n,i,a;
        cin>>n;
        fill(freq,freq+150,0);
        while(n--)
        {
            cin>>a;
            freq[a]++;
        }
        int cnt=0,last=2;
        for(i=3; i<100; i++)
            if(freq[i]>0)
            {
                int val;
                val=i-last;
                last=i;
                cnt+=ans(val);
            }
        printf("Case %d: ",cs++);
        cout<<cnt<<endl;
    }





    return 0;
}


