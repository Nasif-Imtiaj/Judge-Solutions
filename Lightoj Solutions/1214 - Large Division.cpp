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
int main()
{
//freopen("output.txt", "w", stdout);

    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int len,i,j;
        string s;
        ll d,a,b,rem=0;
        cin>>s>>d;
        if(s[0]=='-')
            s.erase(s.begin()+0);
        len=s.length();
        for(i=0; i<len; i++)
        {
            a=(s[i]-48)+rem;
            rem=a%d;
            rem*=10;
        }
        printf("Case %d: ",cs++);
        if(rem==0)
            cout<<"divisible"<<endl;
        else
            cout<<"not divisible"<<endl;

    }





    return 0;
}


