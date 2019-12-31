#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
int main()
{
//freopen("output.txt", "w", stdout);

    int a,b,c,d,not_confused=0;
    map<string,int>mp1;
    map<string,int>:: iterator it;
    map<string,int>mp2;
    string s1,s2,temp;
    stringstream ss;


    while(getline(cin,s1))
    {
        getline(cin,s2);
        mp1.clear();
        mp2.clear();
        not_confused=0;
        ss.clear();
        ss<<s1;
        while(ss>>temp)
        {
            mp1[temp]++;
        }
        ss.clear();
        ss<<s2;
        while(ss>>temp)
        {
            mp2[temp]++;
        }
        int len1,len2;
        len1=mp1.size();
        len2=mp2.size();
        for(it=mp1.begin(); it!=mp1.end(); ++it)
        {
            temp=it->first;
            if(mp2[temp]!=0)
            {
                a=min(mp1[temp],mp2[temp]);
                mp1[temp]-=a;
                mp2[temp]-=a;
                len1--;
                len2--;
                not_confused=1;
            }
        }
        if(len1==0 && len2==0)
            cout<<"A equals B"<<endl;
        else if(len2==0)
            cout<<"B is a proper subset of A"<<endl;
        else if(len1==0)
            cout<<"A is a proper subset of B"<<endl;
        else if(not_confused==0)
            cout<<"A and B are disjoint"<<endl;
        else
            cout<<"I'm confused!"<<endl;

    }
    return 0;
}
