#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d,i,k,j,x[200005],z=0,m,n,o;
    string s,s1;
    cin>>s>>s1;
    for(i=0; i<s.size(); i++)
    {
        cin>>x[i];
    }
    a=s.length();
    b=s1.length();
    m=a;
    for(i=0; i<a; i++)
    {
        d=x[i]-1;
        s.erase(s.begin()+d);
        for(int g=i;g<a;g++){
            if(x[g]>d){
                x[g]--;
            }
        }
        m--;
        for(k=0,j=0; k<m; k++)
        {
            if(s[k]==s1[j])
            {
                j++;
            }
            if(j==b)
            {
                break;
            }
        }
        if(j!=b)
        {
            break;
        }
        z++;
        j=0;
    }
    cout<<z<<endl;
    return 0;
}
