#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
int letters[200];
int main()
{
  //freopen("output.txt", "w", stdout);
    int a,b,c,t,len,i;
    string s,s1;
    int x,y,z;
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>s;
        cin>>a;
        getchar();
        while(a--)
        {
            getline(cin,s1);
            x=s1[0];
            y=s1[2];
            if(letters[y]==0)
                letters[y]=x;
            for(i=65; i<=90; i++)
            {
                if(letters[i]==y)
                    letters[i]=x;
            }
        }
        len=s.length();
        for(i=0; i<len; i++)
        {
            x=s[i];
            if(letters[x]!=0 && x>=65 && x<=90)
            {
                s[i]=letters[x];
            }
        }
        cout<<s<<endl;
        fill(letters,letters+200,0);
    }
    return 0;
}
