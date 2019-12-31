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

    string s,s1;
    int a,b,c,i,z=0,len,len1,len2,j=1,d1,d2;
    while(cin>>s>>s1)
    {
        len1=s.length();
        len2=s1.length();
        len=max(len1,len2);
        while(len1<len)
        {
            s+='0';
            len1++;
        }
        while(len2<len)
        {
            s1+='0';
            len2++;
        }
        for(i=0; i<len; i++)
        {
            if(s[i]=='.' && s1[i]!='.')
            {
                z=-1;
                break;
            }
            if(s[i]!='.' && s1[i]=='.')
            {
                z=1;
                break;
            }
        }
        if(z==0)
        for(i=0; i<len; i++)
        {

            if(s[i]>s1[i])
            {
                z=1;
                break;
            }
            if(s[i]<s1[i])
            {
                z=-1;
                break;
            }
        }
        printf("Case %d: ",j);
        if(z==1)
            cout<<"Bigger"<<endl;
        else if(z==0)
            cout<<"Same"<<endl;
        else
            cout<<"Smaller"<<endl;
        z=0;
        j++;
    }







    return 0;
}

