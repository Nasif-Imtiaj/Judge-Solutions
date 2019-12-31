#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(a) scanf("%d",&a);
#define sl(a) scanf("%ld",&a);
#define sll(a) scanf("%lld",&a);
#define co(a)  cout<<a<<endl;
#define ci(a)  cin>>a;
#define pb push_back(a);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int main()
{
//freopen("output.txt", "w", stdout);
    int a,z=0,distance,len,i,start=0,stop=0,low=MAX;
    char last_char='X';
    string s;
    while(cin>>a)
    {
        if(a==0)
            break;
        getchar();
        ci(s);
        for(i=0; i<a; i++)
        {
            if(s[i]==last_char)
            {
                start=i;
                continue;
            }
            if(s[i]=='Z')
            {
                z=1;
                break;
            }
            if(s[i]!='.' && last_char=='X')
            {
                start=i;
                last_char=s[i];
                continue;
            }
            if(s[i]!='.' && s[i]!=last_char)
            {
                stop=start;
                start=i;
                distance=start-stop;
                last_char=s[i];
                if(distance<low)
                    low=distance;
            }
        }
        if(z!=0)
            printf("0\n");
        else
            co(low);
        start=0,stop=0,low=MAX,z=0;
        last_char='X';
    }

    return 0;
}
