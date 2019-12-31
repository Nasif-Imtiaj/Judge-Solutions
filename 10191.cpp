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
int track[3004];
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    while(scanf("%d",&t)!=EOF)
    {
        getchar();
        int x1,y1,x2,y2,x3,y3,longest=0,starting_min,starting_h,starting_m;
        string s,x,y;
        for(int i=0; i<t; i++)
        {
            getline(cin,s);
            x1=s[0]-48;
            x1*=10;
            x1+=(s[1]-48);
            y1=s[3]-48;
            y1*=10;
            y1+=(s[4]-48);

            x2=s[6]-48;
            x2*=10;
            x2+=(s[7]-48);
            y2=s[9]-48;
            y2*=10;
            y2+=(s[10]-48);
            int l=(x1*60)+y1;
            int r=(x2*60)+y2;
            track[l]++;
            track[r]--;
        }
        for(int i=590; i<=1100; i++)
            track[i]+=track[i-1];
        int cur=0,cur_start;
        track[1080]=1;
        for(int i=10*60; i<=18*60; i++)
        {
            if(track[i]==0)
            {
                if(cur==0)
                    cur_start=i;
                cur++;
            }
            else
            {

                if(cur)
                {
                    if(cur>longest)
                    {
                        longest=cur;
                        starting_min=cur_start;
                    }
                }
                cur=0;
            }
        }
        starting_h=starting_min/60;
        starting_m=starting_min%60;
        printf("Day #%d: the longest nap starts at %d:",cs++,starting_h);
        if(starting_m<10)
            printf("0");
        printf("%d and will last for ",starting_m);
        if(longest<60)
        {
            printf("%d minutes.\n",longest);
        }
        else
        {
            printf("%d hours and %d minutes.\n",longest/60,longest%60);
        }
        for(int i=0; i<3000; i++)
            track[i]=0;
    }

    return 0;
}

