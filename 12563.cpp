#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>ans;
long long int a,sum,x[100000];
void check(int i,int track,int res)
{
    if(res>sum)
        return;
    if(i==a)
    {
        ans.push_back(make_pair(res,track));
        return;
    }
    check(i+1,track,res);
    check(i+1,track+1,res+x[i]);
}
int main()
{
    //freopen("output.txt", "w", stdout);
    long long int m=0,n=0,i,c,d;
    cin>>c;
    for(int j=1; j<=c; j++)
    {
        cin>>a>>sum;
        sum--;
        for(i=0; i<a; i++)
            cin>>x[i];
        check(0,0,0);

        for(i=0; i<ans.size(); i++)
        {
            if(ans[i].first>m && ans[i].second>n && ans[i].first<=sum)
            {
                m=ans[i].first;
                n=ans[i].second;
            }
            else if(ans[i].first>=m && ans[i].second>n && ans[i].first<=sum)
            {
                m=ans[i].first;
                n=ans[i].second;
            }

        }
        printf("Case %d:",j);
        cout<<" "<<n+1<<" "<<m+678<<endl;
        ans.clear();
        m=0;
        n=0;
    }









}
