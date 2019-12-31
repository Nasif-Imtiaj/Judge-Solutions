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

    string s[50];
    int a,b,c,d,i,j,cnt=0,flg=0,x_count=0,high=0,del;

    while(cin>>a){
    getchar();
    if(a==0)
        break;
    for(i=0; i<a; i++)
    {
        x_count=0;
        getline(cin,s[i]);
        for(j=0; j<25; j++)
        {
            if(s[i][j]=='X')
                x_count++;
        }
        if(x_count>high)
            high=x_count;
    }
    del=25-high;
    for(i=0; i<a; i++)
    {
        d=0;
        for(j=0; j<s[i].length(); j++)
        {
            if(d==del)
                break;
            if(s[i][j]==' ')
            {
                s[i].erase(s[i].begin()+j);
                d++;
                j--;
            }
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<s[i].length();j++){
            if(s[i][j]==' ')
                cnt++;
        }
    }
    co(cnt)
    cnt=0,high=0,x_count=0;
    }
    return 0;
}
