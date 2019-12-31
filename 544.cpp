
#include<bits/stdc++.h>
using namespace std;
int cost[300][300];
map<string,int>mp;
int a,b,cities;
void floydwarshell()
{
    int i,j,k;
    for(k=1; k<=cities; k++)
        for(i=1; i<=cities; i++)
            for(j=1; j<=cities; j++)
                cost[i][j]=max(cost[i][j],min(cost[i][k],cost[k][j]));
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int n,s,t,m,x=1,c,i,j,z=1;
    string g,h;
    while(cin>>cities>>m)
    {
        memset(cost,0,sizeof(cost));
        if(cities==0 && m==0)
            break;
        getchar();
        while(m--)
        {
            cin>>g>>h>>c;
            if(mp[g]==0)
            {
                mp[g]=x;
                x++;
            }
            if(mp[h]==0)
            {
                mp[h]=x;
                x++;
            }
            a=mp[g];
            b=mp[h];
            cost[a][b]=c;
            cost[b][a]=c;
        }
        cin>>g>>h;
        a=mp[g];
        b=mp[h];
        floydwarshell();
        printf("Scenario #%d\n",z);
        cout<<cost[a][b]<<" tons"<<endl<<endl;
        mp.clear();
        z++;
        x=1;
    }
    return 0;
}
