#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,i,j,k;

    string s,s1;

    cin>>s;

    a=s.length();

    for(i=0; i<a; i++)
    {
        if(s[i]=='f' && s[i+1]=='t' && s[i+2]=='p' && i==0)
        {
            s1+="ftp";
            i=i+3;
        }
        else if(s[i]=='h' && s[i+1]=='t' && s[i+2]=='t' && s[i+3]=='p' && i==0)
        {
            s1+="http";
            i=i+4;
        }
        s1+="://";
        break;
    }
    for( j=i; j<a; j++)
    {
        if(s[j]=='r' and s[j+1]=='u' && j!=i)
        {
            s1+=".ru";
            j=j+2;
            break;
        }
        s1+=s[j];
    }
    for( k=j; k<a; k++)
    {
        if(k==j)
            s1+="/";
        s1+=s[k];
    }
    cout<<s1<<endl;
    return 0;
}
