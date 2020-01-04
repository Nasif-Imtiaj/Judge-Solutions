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
    getchar();
    while(t--)
    {
        string a,b;
        int l1,l2,f1[30],f2[30],i,c;
        fill(f1,f1+30,0);
        fill(f2,f2+30,0);
        getline(cin,a);
        getline(cin,b);
        l1=a.length();
        l2=b.length();
        for(i=0; i<l1; i++)
        {
            if(a[i]==' ')
                continue;
            if(a[i]>='A' && a[i]<='Z')
                c=a[i]-65;
            else
                c=a[i]-97;
            f1[c]++;
        }
        for(i=0; i<l2; i++)
        {
            if(b[i]==' ')
                continue;
            if(b[i]>='A' && b[i]<='Z')
                c=b[i]-65;
            else
                c=b[i]-97;
            f2[c]++;
        }
        int flg=0;
        for(i=0; i<30; i++)
            if(f1[i]!=f2[i])
                flg=1;
        printf("Case %d: ",cs++);
        if(flg==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }





    return 0;
}

