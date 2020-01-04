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
string table[6],s1,s2;
map<char,pair<int,int> >mp;
void update_table()
{
    int freq[30]= {};
    vector<char>v;
    int len=s1.length();
    for(int i=0; i<len; i++)
        if(!freq[s1[i]-97] && s1[i]!=' ')
        {
            freq[s1[i]-97]=1;
            v.push_back(s1[i]);
        }
    for(int i=0; i<27; i++)
        if(!freq[i] && i!=('q'-97))
            v.push_back(i+97);
    int pos=0;
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
        {
            table[i][j]=v[pos];
            mp[v[pos++]]=make_pair(i,j);
        }

}
void find_pair(char x,char y)
{
    int a1,a2,b1,b2;
    a1=mp[x].first;
    a2=mp[x].second;
    b1=mp[y].first;
    b2=mp[y].second;
    //  cout<<x<<" "<<y<<endl;
//cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<endl;
    if(a1==b1)
    {
        a2++;
        b2++;
        a2%=5;
        b2%=5;
    }
    else if(a2==b2)
    {
        a1++;
        b1++;
        a1%=5;
        b1%=5;
    }
    else
    {
        swap(a2,b2);
    }
    cout<<(char)(table[a1][a2]-32)<<(char)(table[b1][b2]-32);
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        getline(cin,s1);
        getline(cin,s2);
        update_table();
        string new_s,s;
        stringstream ss;
        ss<<s2;
        while(ss>>s)
            new_s+=s;
        int len=new_s.length();
        for(int i=0; i<len; i+=2)
        {
            char x,y;
            x=new_s[i];
            if(i+1==len)
                y='x';
            else
                y=new_s[i+1];
            if(x==y)
            {
                y='x';
                i--;
            }
            //   cout<<x<<" "<<y<<endl;
            find_pair(x,y);

            // break;
        }
        printf("\n");
    }

    return 0;
}

