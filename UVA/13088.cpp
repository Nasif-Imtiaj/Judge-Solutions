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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[2005];
        int freq[30];
        for(int i=0;i<29;i++)
            freq[i]=0;
        scanf("%s",s);
        int len=strlen(s);
        for(int i=0; i<len; i++)
            freq[s[i]-97]++;
        int tot=0;
        for(int i=1; i<28; i++)
        {
            if(freq[i])
            {
                tot+=freq[i]-1;
                freq[i]=1;
            }
        }
        freq[0]+=tot;
        for(int i=0; i<28; i++)
        {
            while(freq[i]--)
            {
                printf("%c",i+97);
            }
        }
        printf("\n");

    }

    return 0;
}

