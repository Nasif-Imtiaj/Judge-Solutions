#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int matrix[100][100];
void slash(int t,int d,int k)
{
    matrix[k][t]=1;
    matrix[k+1][d]=1;
}
void b_slash(int t,int d,int k)
{
    matrix[k][t]=1;
    matrix[k+1][d]=1;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int a,b,c,i,j,k=0,shif=0,t=0,d=0;
    char x=92;
    string s[100];
    cin>>a>>b;
    getchar();
    for(i=0; i<b; i++)
    {
        cin>>s[i];
    }
    for(i=0; i<b; i++)
    {
        for(j=0; j<a; j++)
        {
            if(j==0)
            {
                if(s[i][j]==x)
                {
                    t=0;
                    d=1;
                    slash(t,d,k);
                }
                else
                {
                    t=1;
                    d=0;
                    b_slash(t,d,k);
                }
            }
            else
            {
                if(s[i][j]==x && s[i][j-1]==x)
                {
                    t+=2;d+=2;
                    slash(t,d,k);
                }
                else if(s[i][j]==x && s[i][j-1]=='/'){
                    d+=2;
                    slash(t,d,k);
                }
                else if(s[i][j]=='/' && s[i][j-1]==x){
                    t+=2;
                    b_slash(t,d,k);
                }
                else{
                    t+=2;
                    d+=2;
                    b_slash(t,d,k);
                }
            }
        }
        k+=2;
        t=0,d=0;
    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<a*2; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }













    return 0;
}
