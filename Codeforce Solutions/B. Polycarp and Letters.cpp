#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,i,j,z=0,x[30],len,result=0;

    fill(x,x+30,0);

    string s,temp;

    cin>>a>>s;

    for(i=0; i<a; i++)
    {
        if(!(s[i]>='A' && s[i]<='Z'))
        {
            temp+=s[i];
        }
        else
        {
            len=temp.length();
            for(j=0; j<len; j++)
            {
                x[temp[j]-97]++;
            }
            for(j=0; j<30; j++)
            {
                if(x[j]>0)
                {
                    z++;
                }
            }
            temp.clear();
            fill(x,x+30,0);
        }
        if(z>result)
        {
            result=z;
        }
        z=0;
    }
int temp_len=temp.length();
    if(temp_len!=0)
    {
        len=temp.length();
        for(j=0; j<len; j++)
        {
            x[temp[j]-97]++;
        }
        for(j=0; j<30; j++)
        {
            if(x[j]>0)
            {
                z++;
            }
        }
        temp.clear();
        fill(x,x+30,0);
        if(z>result)
        {
            result=z;
        }
    }
    cout<<result<<endl;
    return 0;
}
