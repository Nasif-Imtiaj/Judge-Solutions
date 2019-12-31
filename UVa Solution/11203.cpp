#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
   // freopen("output.txt", "w", stdout);
    int a,b,c,x[2000],other=0,M=0,E=0,Q=0,yes=0,m,e;

    string s;

    cin>>a;
    getchar();
    while(a--)
    {
        fill(x,x+200,0);
        int len,i;
        cin>>s;
        len=s.length();
        for(i=0; i<len; i++)
        {
            if(s[i]==77)
            {
                M++;
            }
            if(s[i]==69)
                E++;
            x[s[i]]++;
        }
        for(i=0; i<200; i++)
        {
            if(x[i]>0 && i!=69 && i!=77 && i!=63){
                other++;
            }
        }
        for(i=0;i<s.length();i++){
            if(s[i]=='M') m=i;
            if(s[i]=='E') e=i;
        }
        for(i=m;i<e;i++){
            if(s[i]=='?') Q++;
        }
        cout<<Q<<endl;
        if(other==0 && M>0 && E>0 && yes==1 && Q%2!=0){
            printf("theorem\n");
        }
        else
            printf("no-theorem\n");
        M=0;
        E=0;
        Q=0;
        other=0;
        yes=0;
    }
    return 0;
}
