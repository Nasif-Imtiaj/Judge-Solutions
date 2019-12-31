#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(a) scanf("%d",&a);
#define sl(a) scanf("%ld",&a);
#define sll(a) scanf("%lld",&a);
#define co(a)  cout<<a<<endl;
#define ci(a)  cin>>a;
#define pb push_back(a);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int main()
{
//freopen("output.txt", "w", stdout);
    int a,i,len,b,c,no_loop=0;
    string s;
    char last_char;
    cin>>a;
    getchar();
    for(int i=1; i<=a; i++)
    {

        getline(cin,s);
        stringstream ss;
        ss<<s;
        string x,y;
        int F=0,M=0;
        while(ss>>x)
        {
            if(x=="FF")
                F+=2;
            else if(x=="MM")
                M+=2;
            else
                F++,M++;
        }
        if(F!=M || (F==1 && M==1))
            cout<<"NO LOOP"<<endl;
        else
            cout<<"LOOP"<<endl;
        no_loop=0;

    }
    return 0;
}
