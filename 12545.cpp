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
    int t,cs=1;
    char x[1005],y[1005];
    scanf("%d",&t);
    while(t--)
    {
        int x_one=0,x_zero=0,y_one=0,y_zero=0;
        scanf("%s",x);
        scanf("%s",y);
        int len=strlen(x),moves=0;
        for(int i=0; i<len; i++)
        {
            if(x[i]=='0')
                x_zero++;
            else if(x[i]=='1')
                x_one++;
            if(y[i]=='0')
                y_zero++;
            else if(y[i]=='1')
                y_one++;
        }
        for(int i=0; i<len; i++)
        {
            if(x[i]=='?')
            {
                moves++;
                if(x_zero<y_zero && x_one<y_one)
                {
                    x[i]=y[i];
                    if(x[i]=='0')
                        x_zero++;
                    else if(x[i]=='1')
                        x_one++;
                }
                else if(x_zero<y_zero)
                {
                    x[i]='0';
                    x_zero++;
                }
                else
                {
                    x[i]='1';
                    x_one++;
                }
            }
        }
        for(int i=0; i<len; i++)
        {
            if(x[i]!=y[i])
            {
                moves++;
                if(x[i]=='0' && y[i]=='1')
                {
                    if(x_one<y_one)
                    {
                        x_one++;
                        x_zero--;
                        x[i]='1';
                    }
                    for(int j=i+1; j<len; j++)
                    {
                        if(x[j]=='1' && y[j]=='0')
                        {
                            swap(x[i],x[j]);
                            break;
                        }
                    }
                }
                else
                {
                    for(int j=i+1; j<len; j++)
                    {
                        if(x[j]=='0' && y[j]=='1')
                        {
                            swap(x[i],x[j]);
                            break;
                        }
                    }
                }
            }
        }
        int flg=1;
        for(int i=0; i<len; i++)
            if(x[i]!=y[i])
            {
                flg=0;
                break;
            }
        if(!flg)
            moves=-1;
        printf("Case %d: %d\n",cs++,moves);
    }

    return 0;
}

