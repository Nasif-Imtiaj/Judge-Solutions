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
    cin>>t;
    while(t--)
    {
        int n,m,k,i,j,a,l;
        cin>>n>>m>>k;
        int arr[100][100];
        for(i=0; i<n; i++)
            for(j=0; j<k; j++)
            {
                cin>>arr[i][j];
            }
        int q,cnt=0,sol[100];
        cin>>q;
        for(i=0; i<q; i++)
        {
            cin>>sol[i];
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<k; j++)
            {
                int found=0;
                for(l=0; l<q; l++)
                {
                    if(arr[i][j]==sol[l])
                    {
                        found=1;
                        break;
                    }
                }
                if(found==1)
                {
                    cnt++;
                    break;
                }
                if(arr[i][j]<0)
                {
                    int flg=0;
                    for(l=0; l<q; l++)
                    {
                       if(arr[i][j]==sol[l]*-1)
                         flg=1;
                    }

                if(flg==0){

                    cnt++;
                    break;
                }
                }
            }
        }
        // co(cnt)
        printf("Case %d: ",cs++);
        if(cnt==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }





    return 0;
}

