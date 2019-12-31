#include<bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("output.txt", "w", stdout);
    int i,j,len,start=0,dec=0,div=0,d,templen;
    double P=-1,U=-1,I=-1,w=0,mul=1;
    string s,temp,t2,t3;
    int k,o;
    cin>>k;
    getchar();
    for(o=1; o<=k; o++)
    {
        getline(cin,s);
        len=s.length();
        for(i=0; i<len; i++)
        {
            if(s[i]=='=')
            {
                start=1;
                continue;
            }
            if(s[i]=='V' && start==1 || s[i]=='A' && start==1 || s[i]=='W' && start==1)
            {
                templen=temp.length();
                start=0;
                w=0;
                dec=0;
                div=0;
                d=1;
                for(j=0; j<templen; j++)
                {
                    if(temp[j]=='.')
                    {
                        dec=1;
                        continue;
                    }
                    if(dec==1)
                        div++;
                    w*=10;
                    w+=temp[j]-48;
                }
                if(dec==1)
                {
                    while(div--)
                    {
                        d*=10;
                    }
                    w/=d;
                }
                if(s[i-1]=='M')
                {
                    w*=1000000;
                }
                else if(s[i-1]=='k')
                {
                    w*=1000;
                }
                else if(s[i-1]=='m')
                {
                    w/=1000;
                }
                if(s[i]=='V')
                {
                    U=w;

                }
                else if(s[i]=='W')
                {
                    P=w;
                }
                else
                {
                    I=w;
                }
                temp.clear();

            }
            if(start==1)
            {
                if(s[i]=='k' || s[i]=='m' || s[i]=='M' || s[i]=='-')
                    continue;
                temp+=s[i];
            }
        }
        printf("Problem #%d\n",o);
        if(U==-1)
        {
            U=P/I;
            printf("U=%.2lfV\n",U);
        }
        else if(P==-1)
        {
            P=U*I;
            printf("P=%.2lfW\n",P);
        }
        else
        {
            I=P/U;
            printf("I=%.2lfA\n",I);
        }
        U=-1,P=-1,I=-1;
        printf("\n");
    }
    return 0;
}
