#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len1,len2,j=0,i;
    string a,b;
    while(cin>>a>>b)
    {
        len1=a.length();
        len2=b.length();
        for(i=0; i<len2; i++)
        {
            if(b[i]==a[j])
            {
                j++;
            }
        }
        if(j==len1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        j=0;
    }
    return 0;
}
