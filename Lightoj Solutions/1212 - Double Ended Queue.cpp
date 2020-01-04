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
int main()
{
//freopen("output.txt", "w", stdout);
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        list<int>l;
        scanf("%d %d",&n,&m);
        getchar();
        int sz=0;
        printf("Case %d:\n",cs++);
        while(m--)
        {
            char s[30];
            int value;

            scanf("%s",&s);
            if(strcmp(s,"pushLeft")==0)
            {
                scanf("%d",&value);
                getchar();
                if(sz<n)
                {
                    sz++;
                    l.push_front(value);
                    printf("Pushed in left: %d\n",value);
                }
                else
                    printf("The queue is full\n");
            }
            else if(strcmp(s,"pushRight")==0)
            {
                scanf("%d",&value);
                getchar();
                if(sz<n)
                {
                    l.push_back(value);
                    printf("Pushed in right: %d\n",value);
                    sz++;
                }
                else
                    printf("The queue is full\n");
            }
            else if(strcmp(s,"popLeft")==0)
            {
                if(sz==0)
                {
                    printf("The queue is empty\n");
                }
                else
                {
                    value=l.front();
                    printf("Popped from left: %d\n",value);
                    l.pop_front();
                    sz--;
                }
            }
            else
            {
                if(sz==0)
                {
                    printf("The queue is empty\n");
                }
                else
                {
                    value=l.back();
                    printf("Popped from right: %d\n",value);
                    l.pop_back();
                    sz--;
                }
            }

        }
    }
    return 0;
}


