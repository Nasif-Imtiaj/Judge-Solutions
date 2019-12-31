#include<bits/stdc++.h>
using namespace std;
int check_prime(int a)
{
    int i,z=0;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            z++;
            break;
        }
    }
    return z;
}
int main()
{
    // freopen("output.txt", "w", stdout);
    int x[200],i,a,len,b,c,j=1;
    string s,ans;
    cin>>c;
    while(c--)
    {
        fill(x,x+200,0);
        cin>>s;
        len=s.length();
        for(i=0; i<len; i++)
        {
            x[s[i]]++;
        }
        for(i=37; i<=122; i++)
        {
            if(x[i]>0 && x[i]!=1)
            {
                b=check_prime(x[i]);
                if(b==0)
                {
                    ans+=i;
                }
            }
        }
        len=ans.length();
        if(len==0)
        {
            printf("Case %d: empty\n",j);
        }
        else
        {
            printf("Case %d: ",j);
            cout<<ans<<endl;
        }
        ans.clear();
        j++;
    }
    return 0;
}
