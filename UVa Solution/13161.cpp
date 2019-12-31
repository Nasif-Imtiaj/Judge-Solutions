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
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        int rita=4,theo=3,ans=0;
        while(a--)
        {
            b-=rita;
            rita++;
        }
        while(b>0 || c>0)
        {
            if(b>=rita)
                b-=rita;
            if(c>=theo)
            {
                c-=theo;
            }
            else
            {
                int extra=theo-c;
                b-=extra;
                c=0;
                ans+=extra;
                //cout<<b<<" "<<c<<" "<<extra<<endl;
            }
            theo++;
            rita++;
        }
        printf("%d\n",ans);

    }

    return 0;
}

