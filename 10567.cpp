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
vector<int>letters[200];
int last_point[200];
int main()
{
//freopen("output.txt", "w", stdout);
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        letters[s[i]].push_back(i);
    }
    for(int i=0; i<150; i++)
        letters[i].push_back(-1);
    int n;
    cin>>n;
    while(n--)
    {
        cin>>s;
        int st,en;
        len=s.length();
        int i=0;
        int cur_location=-1;
        while(i<len)
        {
            int cur_letter=s[i];
            if(letters[cur_letter][last_point[cur_letter]]==-1)
                break;
            while(cur_location>letters[cur_letter][last_point[cur_letter]])
            {
                last_point[cur_letter]++;
                if(letters[cur_letter][last_point[cur_letter]]==-1)
                    break;
            }
            if(letters[cur_letter][last_point[cur_letter]]==-1)
                break;
            if(i==0)
            {
                st=letters[cur_letter][0];
            }
            if(i==len-1)
            {
                en=letters[cur_letter][last_point[cur_letter]];
            }
            cur_location=letters[s[i]][last_point[s[i]]];
            last_point[s[i]]++;
            i++;
        }
        if(i==len)
            printf("Matched %d %d\n",st,en);
        else
            printf("Not matched\n");
        for(i=0; i<180; i++)
            last_point[i]=0;

    }

    return 0;
}
