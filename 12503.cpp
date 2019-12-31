#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,x[1000],pos=0,val=0,i;
    string s;
    cin>>b;
    while(b--)
    {
        cin>>a;
        getchar();
        for(i=0; i<a; i++)
        {
            getline(cin,s);
            while(s[0]==' ')
            s.erase(s.begin()+0);
            if(s=="LEFT")
                x[i]=-1;
            else if(s=="RIGHT")
                x[i]=1;
            else
            {
                val=0;
                for(int j=0; j<s.length();j++)
                {
                    val*=10;
                    if(s[j]>='0' && s[j]<='9')
                    {
                        val+=s[j]-48;
                    }
                }
                x[i]=x[val-1];
            }
            pos+=x[i];
        }
        co(pos)
        pos=0;
    }



    return 0;
}
