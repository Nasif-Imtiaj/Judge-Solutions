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
string eliminate_zero(string s,int a)
{
    int i;
    for(i=a; i>0; i--)
    {
        s[i]='9';
        if(s[i-1]!='0')
        {
            s[i-1]--;
            break;
        }
    }
    return s;
}
string dele_front_zero(string s)
{
    if(s.length()==1)
        return s;
    while(s[0]=='0')
    {
        s.erase(s.begin()+0);
        if(s.length()==1)
            break;
    }
    return s;
}
string sub(string s)
{
    string ascending,descending,ans;
    ascending=s;
    descending=s;
    sort(ascending.begin(),ascending.end());
    sort(descending.begin(),descending.end(),greater<int>());

    ascending=dele_front_zero(ascending);
    descending=dele_front_zero(descending);

    cout<<descending<<" - "<<ascending<<" = ";

    int len1,len2,i,j,rem=0,value,x,y;
    len1=descending.length();
    len2=ascending.length();
    for(i=len1-1,j=len2-1; i>=0 && j>=0; i--, j--)
    {
        x=descending[i]-48;
        y=ascending[j]-48;
        if(x<y)
        {
            x=10+x;
            if(descending[i-1]!='0')
                descending[i-1]--;
            else
                descending=eliminate_zero(descending,i-1);
        }
        value=x-y;

        ans+=value+48;
    }
    if(i!=-1)
    {
        while(i>=0)
        {
            ans+=descending[i];
            i--;
        }
    }

    reverse(ans.begin(),ans.end());
    ans=dele_front_zero(ans);
    cout<<ans<<endl;
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);

    map<string,int>track;

    int a,b,c,i,j,z=0;

    string x,y;

   while(cin>>x)
     {
         if(x=="0")
             break;
         z=0;
         track.clear();
         cout<<"Original number was "<<x<<endl;
         y=x;
         while(1)
         {
             y=sub(y);
             if(y=="0")
             {
                 cout<<y<<" - "<<y<<" = "<<y<<endl;
                 cout<<"Chain length "<<z+2<<endl<<endl;
                 break;
             }
             track[y]++;
             z++;
             if(track[y]==2)
             {
                 cout<<"Chain length "<<z<<endl<<endl;
                 break;
             }
         }
     }
    return 0;
}
