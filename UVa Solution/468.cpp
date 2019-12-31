#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int freq1[150];
int freq2[150];
int changed[1000000];
vector<pair<int,int>>f1;
vector<pair<int,int>>f2;
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,d,i,j,uni=0;
    string s,s1,ans;
    cin>>a;
    getchar();
    while(a--)
    {
        cin>>s>>s1;

        for(i=0; i<s.length(); i++)
        {
            freq1[s[i]]++;
        }
        for(i=0; i<s1.length(); i++)
        {
            freq2[s1[i]]++;
        }
        for(i=65; i<=122; i++)
        {
            if(freq1[i]!=0)
            {
                f1.push_back(make_pair(freq1[i],i));
                uni++;
            }
            if(freq2[i]!=0)
                f2.push_back(make_pair(freq2[i],i));
        }
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
      /*  for(i=0;i<uni;i++){
            cout<<f1[i].first<<" "<<f1[i].second<<" "<<f2[i].first<<" "<<f2[i].second<<endl;
        }*/
        while(uni--)
        {
            for(i=0; i<s1.length(); i++)
            {
                if(s1[i]==f2[uni].second && changed[i]==0)
                {
                    s1[i]=f1[uni].second;
                    changed[i]=1;
                }
            }
           // co(s1)
        }
        co(s1)
        f1.clear();
        f2.clear();
        uni=0;
        fill(freq1,freq1+149,0);
        fill(freq2,freq2+149,0);
        fill(changed,changed+1000000,0);
        if(a!=0)
            cout<<endl;
    }








    return 0;
}
