#include<bits/stdc++.h>
using namespace std;
set<vector<int>>store;
set<vector<int>>:: reverse_iterator it;
vector<int>ans;
int a,sum,x[1000];
void backtrack(int pos,int res)
{
    if(res==sum)
    {
        store.insert(ans);
        return;
    }
    for(int i=pos;i<a;i++)
    {
        ans.push_back(x[i]);
        backtrack(i+1,res+x[i]);
        ans.pop_back();
    }
}
int main()
{
    int b,c,d,i,j;
//freopen("output.txt", "w", stdout);
    while(cin>>sum>>a)
    {
        if(sum==0 && a==0)
            break;
        for(i=0; i<a; i++)
            cin>>x[i];

        backtrack(0,0);
        printf("Sums of %d:\n",sum);
        if(store.size()==0)
        {
            cout<<"NONE"<<endl;
        }
        else
        {
            for(it=store.rbegin(); it!=store.rend(); it++)
            {
               vector<int> x=*it;
                cout<<x[0];
                for(i=1;i<x.size();i++)
                cout<<"+"<<x[i];
                cout<<endl;
            }
        }
        store.clear();
        ans.clear();
    }
return 0;
}
