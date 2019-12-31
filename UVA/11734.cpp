#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,b,c,i,j;
    string s1,s2;
    cin>>a;
    getchar();
    for(i=1; i<=a; i++)
    {
        getline(cin,s1);
        getline(cin,s2);
        printf("Case %d: ",i);
        if(s1==s2)
            co("Yes")
        else{
            j=0;
            while(j<s1.length()){
                if(s1[j]==' ')
                    s1.erase(s1.begin()+j);
                else
                    j++;
            }
            j=0;
            while(j<s2.length()){
                if(s2[j]==' ')
                    s2.erase(s2.begin()+j);
                else
                    j++;
            }
            if(s1==s2)
                co("Output Format Error")
                else
                co("Wrong Answer")
        }
    }
    return 0;
}
