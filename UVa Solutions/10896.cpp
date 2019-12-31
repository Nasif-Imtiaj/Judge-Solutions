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
int find_letter(char x,char y)
{
    int cnt=0;
    while(x!=y)
    {
        cnt++;
        x--;
        if(x<'a')
            x='z';
    }
    return cnt;
}
int check(string x,string y)
{
    set<int>s;
    int len=x.length();
    for(int i=0; i<len; i++)
    {
        s.insert(find_letter(y[i],x[i]));
    }
    if(s.size()==1)
    {
        for(auto x:s)
            return x;
    }
    return -1;

}
int main()
{
//freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s,x,y;
        getline(cin,s);
        cin>>x;
        getchar();
        stringstream ss;
        ss<<s;
        int len=x.length();
        set<int>st;
        while(ss>>y)
        {
            int len2=y.length();
            if(len==len2)
            {
                int temp=check(x,y);
                if(temp!=-1)
                    st.insert('a'+temp);
            }
        }
        for(auto x:st)
            cout<<(char)x;
        cout<<endl;

    }




    return 0;
}
