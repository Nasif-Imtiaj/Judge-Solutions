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
int main()
{
  //  freopen("output.txt", "w", stdout);

    string s;
    int a,b,c,d,i,j,t,mark=0,x=1,y=0,sp=-1;

    cin>>t;
    getchar();
    while(t--)
    {
        for(i=0; i<5; i++)
        {
            cin>>s;
            for(j=0; j<5; j++)
            {
                if(s[j]=='>')
                    mark=j;
                if(s[j]=='|')
                    y=j;
                if(s[j]=='<')
                    sp=j;
            }
        }
        printf("Case %d: ",x);
        if(sp!=-1)
        {
            if(sp>y)
                cout<<"Thik Ball"<<endl;
            else
                cout<<"No Ball"<<endl;
        }
        else if(mark<y)
            cout<<"Thik Ball"<<endl;
        else
            cout<<"No Ball"<<endl;
        x++;
        sp=-1;
    }
    return 0;
}
