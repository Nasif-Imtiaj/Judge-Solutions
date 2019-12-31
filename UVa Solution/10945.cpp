#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(a) scanf("%d",&a);
#define sl(a) scanf("%ld",&a);
#define sll(a) scanf("%lld",&a);
#define co(a)  cout<<a<<endl;
#define ci(a)  cin>>a;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int main()
{
//freopen("output.txt", "w", stdout);
    string s,temp,check;
    int len,i;
    while(getline(cin,s))
    {
        if(s=="DONE")
            break;
        len=s.length();
        for(i=0; i<len; i++)
        {
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
                temp+=s[i];
        }
        transform(temp.begin(), temp.end(),temp.begin(), ::tolower);
        check=temp;
        reverse(temp.begin(),temp.end());
        if(check==temp)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;

        temp.clear();
    }
    return 0;
}
