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
vector<int>table_location[500];
bool cmp(pair<int,int>&l,pair<int,int>&r)
{
    if(l.first>r.first)
        return 1;
    return 0;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n==0 && m==0)
            break;
        vector<pair<int,int> >people;
        priority_queue<pair<int,int> >pq;
        for(int i=0; i<n; i++)
        {
            int a;
            scanf("%d",&a);
            people.push_back(make_pair(a,i));
        }
        sort(people.begin(),people.end(),cmp);
        for(int i=0; i<m; i++)
        {
            int a;
            scanf("%d",&a);
            pq.push(make_pair(a,i));
        }
        int flg=0;
        for(int i=0; i<n; i++)
        {
            int temp=people[i].first;
            int location=people[i].second;
            queue<pair<int,int> >add_to_queue_later;
            while(!pq.empty() && temp)
            {
                int cur=pq.top().first;
                int table_no=pq.top().second;
                pq.pop();
                table_location[location].push_back(table_no);
                cur--;
                temp--;
                if(cur)
                {
                    add_to_queue_later.push(make_pair(cur,table_no));
                }
            }
            if(temp)
            {
                flg=1;
                break;
            }
            while(!add_to_queue_later.empty()){
                int a=add_to_queue_later.front().first;
                int b=add_to_queue_later.front().second;
                pq.push(make_pair(a,b));
                add_to_queue_later.pop();
            }
        }
        if(flg)
            printf("0\n");
        else
        {
            printf("1\n");
            for(int i=0; i<n; i++)
            {
                int sz=table_location[i].size();
                for(int j=0; j<sz-1; j++)
                    printf("%d ",table_location[i][j]+1);
                printf("%d\n",table_location[i][sz-1]+1);
            }
        }
        for(int i=0; i<n; i++)
            table_location[i].clear();
    }

    return 0;
}

