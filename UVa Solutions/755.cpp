#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
 //   freopen("output.txt", "w", stdout);
    int a,b,c,len,i,x,d=0;
    map<string,int>dup;
    map<string,int>::iterator it;
    string s,temp,rest,blank;

    cin>>b;
    while(b--)
    {

        cin>>a;
        getchar();
        while(a--)
        {
            cin>>s;
            len=s.length();
            i=0;
            while(i<s.length())
            {
                if(s[i]=='-')
                    s.erase(s.begin()+i);
                else
                    i++;
            }
            len=s.length();
            for(i=0; i<s.length(); i++)
            {
                if(s[i]>='A' && s[i]<='C')
                {
                    s[i]='2';
                }
                if(s[i]>='D' && s[i]<='F')
                {
                    s[i]='3';
                }
                if(s[i]>='G' && s[i]<='I')
                {
                    s[i]='4';
                }
                if(s[i]>='J' && s[i]<='L')
                {
                    s[i]='5';
                }
                if(s[i]>='M' && s[i]<='O')
                {
                    s[i]='6';
                }
                if(s[i]>='P' && s[i]<='S')
                {
                    s[i]='7';
                }
                if(s[i]>='T' && s[i]<='V')
                {
                    s[i]='8';
                }
                if(s[i]>='W' && s[i]<='Y')
                {
                    s[i]='9';
                }
            }
            for(i=0; i<3; i++)
            {
                temp+=s[i];
            }
            temp+='-';
            for(i=3; i<7; i++)
            {
                rest+=s[i];
            }
            temp+=rest;
            s=temp;
            temp.clear();
            rest.clear();
            dup[s]++;
        }
        for(it=dup.begin(); it!=dup.end(); ++it)
        {
            if(it->second>1)
            {
                d=1;
                cout<<it->first<<" "<<it->second<<endl;
            }
        }
        if(d==0)
            printf("No duplicates.\n");
        if(b>0)
            printf("\n");
        dup.clear();
        temp.clear();
        rest.clear();
        d=0;
    }
    return 0;
}
