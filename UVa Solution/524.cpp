#include<bits/stdc++.h>
using namespace std;
int a,checkprime[50];
vector<int>ans;
bool visit[50];
void backtrack(int pos,bool visit[])
{
    if(pos==a)
    {
        if(checkprime[ans[pos-1]+1]!=1)
            return;
        for(int i=0; i<ans.size()-1; i++)
            cout<<ans[i]<<" ";
        cout<<ans[ans.size()-1]<<endl;
        return;
    }
    for(int i=2; i<=a; i++)
    {
        if(visit[i]==1)
        {
            continue;
        }
        if(checkprime[i+ans[pos-1]]==1)
        {
            ans.push_back(i);
            visit[i]=1;
            backtrack(pos+1,visit);
            visit[i]=0;
            ans.pop_back();
        }
    }
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int b=1,c;
    checkprime[2]=1;
    checkprime[3]=1;
    checkprime[5]=1;
    checkprime[7]=1;
    checkprime[11]=1;
    checkprime[13]=1;
    checkprime[17]=1;
    checkprime[19]=1;
    checkprime[23]=1;
    checkprime[29]=1;
    checkprime[31]=1;
    checkprime[37]=1;
    while(cin>>a)
    {
        if(b!=1)
            cout<<endl;
        ans.push_back(1);
        printf("Case %d:\n",b);
        backtrack(1,visit);
        b++;
        ans.clear();
        fill(visit,visit+20,0);
    }










    return 0;
}
