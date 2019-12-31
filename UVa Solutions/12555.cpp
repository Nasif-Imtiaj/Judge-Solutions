#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,b,m,n,len,i,j,z=0,mark=0,mark2=0;
    double x,y;
    stringstream change;
    string s,ex,ans,d,c;

    cin>>a;
    getchar();
    for(j=1; j<=a; j++)
    {
        getline(cin,s);
        len=s.length();

        for(i=0; i<len; i++)
        {
            if(s[i]==' ')
            {
                mark=1;
            }
           else if(mark==0)
            {
                d+=s[i];
            }
          if(s[i]>='1' && s[i]<='9' && mark==1)
            {
                mark2=1;
                c+=s[i];
            }
        }
        change.clear();
        change<<d;
        change>>m;
        change.clear();
        change<<c;
        change>>n;
        if(mark==1 && mark2==1)
            x=(double)m*.5+(double)n*0.05;
        else if(mark==1)
            x=(double)m*.5;
        change.clear();
        change<<x;
        change>>ans;
        len=ans.length();
        if(len==1)
        {
            cout<<"Case "<<j<<": "<<ans<<endl;
        }
        else
        {
            for(i=len-1; i>=0; i--)
            {
                if(ans[i]=='0')
                {
                    ans.erase(i);
                }
                else
                {
                    break;
                }
            }
            len=ans.length();

            if(len==2)
            {
                ans.erase(1);
            }
            cout<<"Case "<<j<<": "<<ans<<endl;
        }
        d.clear();
        c.clear();
        ans.clear();
        mark=0;
        mark2=0;
    }
    return 0;
}
