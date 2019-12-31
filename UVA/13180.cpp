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
vector<ll>x;
vector<ll>y;
vector<ll>z;
int main()
{
//freopen("output.txt", "w", stdout);
    ll a,b,c,i;
    while(cin>>a)
    {
        if(a==0)
            break;
        z.push_back(a);
        while(cin>>b)
        {
            if(b==0)
                break;
            z.push_back(b);
        }
        int len=z.size();
        if(len%2==0)
            cout<<"NO"<<endl;
        else
        {
            sort(z.begin(),z.end());
            for(i=0; i<len-1; i++)
            {
                if(z[i]==z[i+1])
                {
                    x.push_back(z[i]);
                    y.push_back(z[i+1]);
                    i++;
                }
                else
                    break;
            }
            if(i+1!=len)
                cout<<"NO"<<endl;
            else{
            int len1,len2;
            len1=len/2;
            for(i=0; i<len1; i++)
                cout<<x[i]<<" ";
            cout<<z[len-1];
            for(i=len1-1; i>=0; i--)
                cout<<" "<<y[i];
            cout<<endl;
            }
        }
        x.clear();
        y.clear();
        z.clear();
    }
    return 0;
}
