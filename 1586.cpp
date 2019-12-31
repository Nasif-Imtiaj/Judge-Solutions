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

    int a,b,c,d,i,j,k;

    double x,y,z,total=0,val=0;

    string s,number,chem;
    cin>>a;
    getchar();
    while(a--)
    {
        total=0,val=0;
        number.clear();
        cin>>s;
        reverse(s.begin(),s.end());
        for(i=0; i<s.length(); i++)
        {
            if(s[i]!='N' && s[i]!='O' && s[i]!='H' && s[i]!='C')
            {
                number+=s[i];
            }
            else
            {
                val=0;
                reverse(number.begin(),number.end());
                for(j=0; j<number.length(); j++)
                {
                    val*=10;
                    val+=number[j]-48;
                }
                if(number.length()==0)
                    val=1;
                if(s[i]=='N')
                {
                    total+=val*14.01;
                }
                else if(s[i]=='H')
                {
                    total+=val*1.008;
                }
                else if(s[i]=='C')
                {

                    total+=val*12.01;
                }
                else
                {
                    total+=val*16.00;
                }
                number.clear();
            }
        }
        printf("%.3lf\n",total);
    }















    return 0;
}
