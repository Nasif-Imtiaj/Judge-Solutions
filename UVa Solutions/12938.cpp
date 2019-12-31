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
int make_int(string s)
{
    int num=s[0]-48;
    num*=10;
    num+=(s[1]-48);
    num*=10;
    num+=(s[2]-48);
    num*=10;
    num+=(s[3]-48);
    return num;
}
int four_digit_sq(string s)
{
    int ans=0;
    string temp=s;
    for(int j=0; j<=3; j++)
    {
        s=temp;
        for(int i=0; i<=9; i++)
        {
            if(j==0 && i==0)
                continue;
            s[j]=i+48;
            if(s==temp)
                continue;
            int num=make_int(s);
            int sq=sqrt(num);
            if(sq*sq==num){
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
        printf("Case %d: %d\n",cs++,four_digit_sq(s));
    }

    return 0;
}

