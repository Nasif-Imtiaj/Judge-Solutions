#include<bits/stdc++.h>
using namespace std;
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
    //freopen("output.txt", "w", stdout);
    int a,b,c,sum=0,i;

    string s;

    while(cin>>s)
    {

        a=s.length();
        for(i=0; i<a; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                sum+=s[i]-96;
            }
            if(s[i]>='A' && s[i]<='Z')
            {
                sum+=s[i]-38;
            }
        }
        c=prime(sum);
        if(c==0)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
        sum=0;
    }
    return 0;
}
