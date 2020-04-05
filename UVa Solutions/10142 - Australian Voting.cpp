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
string names[50];
vector<pair<int,int> >winners;
int vote_count[30],cur_option_pos[30],omitted[30];
queue<int>voting_options[1005],voted_by[30];
void make_int(string s,int len,int pos)
{
    int num=0;
    for(int i=0; i<=len; i++)
    {
        if(s[i]==' ' || i==len)
        {
            voting_options[pos].push(num);
            num=0;
        }
        else
        {
            num*=10;
            num+=s[i]-48;
        }
    }
}
bool cmp(pair<int,int>&l,pair<int,int>&r)
{
    if(l.first>r.first)
        return 1;
    return 0;
}
void change_votes(int n)
{
    while(!voted_by[n].empty())
    {
        int people=voted_by[n].front();
        voted_by[n].pop();
        int next_choice=-1;
        while(!voting_options[people].empty())
        {
            int ft=voting_options[people].front();
            voting_options[people].pop();
            if(omitted[ft]==0)
            {
                next_choice=ft;
                break;
            }
        }
        if(next_choice==-1)
            continue;
        vote_count[next_choice]++;
        voted_by[next_choice].push(people);
    }
}
void update_winners(int n)
{
    winners.clear();
    for(int i=1; i<=n; i++)
    {
        if(!omitted[i])
            winners.push_back(make_pair(vote_count[i],i));
    }
}
void voting_process(int n,int m)
{
    for(int i=0; i<m; i++)
    {
        int choice=voting_options[i].front();
        voting_options[i].pop();
        vote_count[choice]++;
        voted_by[choice].push(i);
    }
    for(int i=1; i<=n; i++)
    {
        if(vote_count[i])
            winners.push_back(make_pair(vote_count[i],i));
        else
            omitted[i]=1;
    }
    int ans,flg=0;
    vector<int>last_removed;
    ans=m/2;
    if(m%2!=0)
        ans++;
    while(1)
    {
        sort(winners.begin(),winners.end(),cmp);
        int sz=winners.size();
        for(int i=0; i<sz; i++)
        {
            if(winners[i].first>ans)
            {
                cout<<names[winners[i].second-1]<<endl;
                flg=1;
            }
        }
        if(!flg)
        {
            int mn=winners[sz-1].first;
            last_removed.clear();
            while(sz && winners[sz-1].first==mn )
            {
                int candidate=winners[sz-1].second;
                omitted[candidate]=1;
                change_votes(candidate);
                last_removed.push_back(candidate);
                winners.pop_back();
                sz--;
            }
            update_winners(n);
        }
        if(flg)
            break;
        if(winners.size()==0)
            break;
    }
    if(!flg)
    {
        int sz=last_removed.size();
        for(int i=sz-1; i>=0; i--)
            cout<<names[last_removed[i]-1]<<endl;
    }
}
void init(int n,int m)
{


    for(int i=0; i<m; i++)
    {

        while(!voting_options[i].empty())
        {
            voting_options[i].pop();
        }
    }
    for(int i=1; i<=n; i++)
    {
        vote_count[i]=0;
        omitted[i]=0;
        cur_option_pos[i]=0;
        while(!voted_by[i].empty())
            voted_by[i].pop();
    }
    winners.clear();
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,flg=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        getchar();
        if(flg)
            printf("\n");
        for(int i=0; i<n; i++)
        {
            getline(cin,names[i]);
        }
        string s;
        int pos=0;
        while(getline(cin,s))
        {
            int len=s.length();
            if(!len)
                break;
            make_int(s,len,pos++);
        }
        voting_process(n,pos);
        flg=1;
        init(n,pos);
    }

    return 0;
}

