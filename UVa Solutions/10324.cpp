#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q)  cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int ones[1000000],zeros[1000000];
int main()
{
//freopen("output.txt", "w", stdout);

    string s;
    int a,b,c,d,i,m,n,x,y,j=1;
    while(cin>>s)
    {
        if(s[0]=='0')
            zeros[0]=1;
        else
            ones[0]=1;
        for(i=1; i<s.length(); i++)
        {
            if(s[i]=='0')
                zeros[i]=zeros[i-1]+1;
            else
                zeros[i]=zeros[i-1];
            if(s[i]=='1')
                ones[i]=ones[i-1]+1;
            else
                ones[i]=ones[i-1];
        }
        printf("Case %d:\n",j);
        cin>>c;
        while(c--)
        {
            cin>>a>>b;
            m=max(a,b);
            n=min(a,b);
            n--;
            if(n<0)
            {
                x=ones[m];
                y=zeros[m];
            }
            else{
            x=ones[m]-ones[n];
            y=zeros[m]-zeros[n];
            }
          //cout<<x<<" "<<y<<endl;
            if(x==0 || y==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        j++;
        fill(ones,ones+1000000,0);
        fill(zeros,zeros+1000000,0);
    }
    return 0;
}
