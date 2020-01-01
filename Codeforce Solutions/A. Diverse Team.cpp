#include<bits/stdc++.h>
using namespace std;
int ans[100];
int x[200];
vector<int>ok;
int main()
{
    int a,b,c,i,j;

    cin>>a>>b;
    for(i=1; i<=a; i++)
    {
        cin>>x[i];
        if(ans[x[i]]==0)
        {
            ans[x[i]]=i;
        }
    }
    for(i=1; i<=100; i++)
    {
        if(ans[i]!=0){
            ok.push_back(ans[i]);
        }
    }
    if(ok.size()>=b)
    {
        cout<<"YES"<<endl;
        for(i=0; i<b; i++)
            cout<<ok[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;




}
