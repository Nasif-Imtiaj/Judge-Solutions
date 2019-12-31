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
int main()
{
//freopen("output.txt", "w", stdout);
    vector<int>values;
    for(int i=1; i<=6; i++)
    {
        for(int j=1; j<=6; j++)
            values.push_back(i+j);
    }
    sort(values.begin(),values.end());
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        int len=s.length(),freq[110]= {0};
        for(int i=0; i<len; i++)
        {
            if(s[i]==' ')
                continue;
            freq[s[i]]++;
        }
        sort(freq,freq+100);
        int ans=0;
        for(int i=99,j=0; j<36; i--,j++){
            ans+=(freq[i]*values[j]);
           //cout<<freq[i]<<" "<<values[j]<<endl;
        }
        printf("%d\n",ans);

    }

    return 0;
}

