#include<bits/stdc++.h>
using namespace std;
int y[10005],l=0;
char j[1000]= {};
int prime(long long int a)
{
    long long int i,z=0;
    for(i=2; i<=sqrt(a); i++)
        if(a%i==0)
        {
            z++;
            break;
        }
    return z;
}
int main()
{
   // freopen("output.txt", "w", stdout);
    int a,b,c,d,i,yes=0,total,x,len,dot=0;
    int special=0;
    double ans;
    string s,s1;
    for(i=0; i<=10000; i++)
    {
        x=i*i+i+41;
        c=prime(x);
        if(c==0)
        {
            y[l]=1;
            l++;
        }
        else
        {
            y[l]=0;
            l++;
        }
    }
    while(cin>>a>>b)
    {
        d++;
        total=b-a;
        total++;
        for(i=a; i<=b; i++)
        {
            if(y[i]==1)
                yes++;
        }
        ans=((double)yes/(double)total)*100;
        //printf("%llf\n",ans);
        yes=0;
        s.clear();
        sprintf(j, "%f",ans);
        s=j;
        // cout<<s<<endl;
        len=s.length();
        if(s[5]>='5' && s[5]<='9')
        {
            s[4]+=1;
            if(!(s[4]>='0' && s[4]<='9'))
            {
                s[4]='0';
                s[3]+=1;
            }
            if(s[3]>'9')
            {
                s[3]='0';
                s[1]+=1;
            }
            if(s[1]>'9')
            {
                s[1]='0';
                s[0]='0';
                special=1;
            }
        }
        if(special==1)
            cout<<"1";
        for(i=0; i<5; i++)
        {
            cout<<s[i];
            if(s[i]=='.')
            {
                cout<<s[i+1];
                cout<<s[i+2];
                break;
            }
        }
        cout<<endl;
        special=0;
    }
    return 0;
}
