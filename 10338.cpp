#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int k,j,a,b,c,d,len,z=1,fact=1,permu=1,i,x[60];

    string s;

    cin>>a;
    for(j=1; j<=a; j++)
    {
        fill(x,x+30,0);
        cin>>s;

        len=s.length();

        for(i=0; i<len; i++)
        {
            x[s[i]-65]++;
        }
        for(i=1; i<=len; i++)
        {
            fact*=i;
        }
        for(i=0; i<30; i++)
        {

            if(x[i]>0)
            {
                for(k=1; k<=x[i]; k++)
                {
                    permu*=k;
                }
                x[i]=permu;
            }
            permu=1;
        }
        for(i=0; i<30; i++)
        {
            if(x[i]>1)
            {
                fact=fact/x[i];
            }
        }
        cout<<"Data set "<<j<<": "<<fact<<endl;
        z=1;
        fact=1;
        permu=1;
    }

    return 0;
}
