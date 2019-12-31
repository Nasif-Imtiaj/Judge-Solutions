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
int matrix[1000][1000];
bool test(int x,int y,int n)
{
    map<int,int>mp;
    for(int i=x; i<x+n; i++)
    {
        for(int j=y; j<y+n; j++)
        {
            mp[matrix[i][j]]++;
            if(mp[matrix[i][j]]==2)
                return false;
        }
    }
    return true;
}
bool row(int pos,int n)
{
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        mp[matrix[pos][i]]++;
        if(mp[matrix[pos][i]]==2)
            return false;
    }
    return true;
}
bool clm(int pos,int n)
{
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        mp[matrix[i][pos]]++;
        if(mp[matrix[i][pos]]==2)
            return false;
    }
    return true;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                scanf("%d",&matrix[i][j]);
        int flg;
        int sq=sqrt(n),x=0,y=0;
        for(int i=0; i<sq; i++)
        {
            y=0;
            for(int j=0; j<sq; j++)
            {

                flg=test(x,y,sq);
                if(!flg)
                    break;
                y+=sq;
            }
            if(!flg)
                break;
            x+=sq;
        }
        if(flg)
        for(int i=0; i<n; i++)
        {
            flg=row(i,n);
            if(!flg)
                break;
            flg=clm(i,n);
            if(!flg)
                break;
        }
        if(flg)
            printf("yes\n");
        else
            printf("no\n");

    }

    return 0;
}
