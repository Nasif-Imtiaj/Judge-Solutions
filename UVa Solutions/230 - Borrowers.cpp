#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define bug printf("bug\n");
#define bug2(var) cout<<#var<<" "<<var<<endl;
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
pair<string,string> find_name(string s)
{
    string title=" ",author;
    title+='"';
    int i=1;
    while(s[i]!='"')
        title+=s[i],i++;
    title+='"';
    i+=5;
    while(s[i]!='\0')
        author+=s[i],i++;
    return {author,title};
}
bool cmp(pair<string,string>&l,pair<string,string>&r)
{
    if(l.first<r.first)
        return 1;
    if(l.first>r.first)
        return 0;
    if(l.second<r.second)
        return 1;
    return 0;
}
int main()
{
    FastRead
    //freopen("output.txt", "w", stdout);
    map<string,string>parents;
    map<string,int>check,ID;
    set<string>st;
    string s,s1;
    vector<pair<string,string> >v;
    int sz=0;
    while(getline(cin,s))
    {
        if(s=="END")
            break;
        pair<string,string>vv=find_name(s);
        v.push_back(vv);
        sz++;
    }
    sort(v.begin(),v.end(),cmp);

    parents[v[0].second]=v[0].second;
    ID[v[0].second]=0;
    check[v[0].second]=1;

    for(int i=1; i<sz; i++)
    {
        parents[v[i].second]=v[i-1].second;
        ID[v[i].second]=i;
        check[v[i].second]=1;
    }

    while(cin>>s)
    {
        if(s=="END")
            break;
        if(s=="SHELVE")
        {
            vector<pair<int,string> >order;
            sz=0;
            for(auto x:st)
                if(check[x]==1)
                    order.push_back({ID[x],x}),sz++;
            sort(order.begin(),order.end());

            for(int i=0; i<sz; i++)
            {
                cout<<"Put";
                string x=order[i].second;
                string p=parents[x];
                //cout<<x<<" "<<p<<" "<<check[p]<<endl;
                while(!check[p])
                {
                    p=parents[p];
                    if(p==parents[p])
                        break;
                }

                if(!check[p] || p==x)
                {
                    cout<<x<<" first"<<endl;;
                }
                else
                {
                    cout<<x<<" after"<<p<<endl;
                }
            }
            cout<<"END"<<endl;
            st.clear();
        }
        else
        {
            getline(cin,s1);
            if(s=="RETURN")
                st.insert(s1),check[s1]=1;
            else
                check[s1]=0;

        }
    }


    return 0;
}

