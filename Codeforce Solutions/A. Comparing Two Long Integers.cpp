#include<bits/stdc++.h>
using namespace std;
char s[1000005],s1[1000005],s2[1000005],s3[1000005];
int main()
{
    int a,b,c,x=0,y=0,p,q,i,j,m,n,k=0;

    scanf("%s %s",s,s1);
    a=strlen(s);
    b=strlen(s1);
    for(i=0; i<a; i++)
    {
        if(s[i]!='0')
        {
            break;
        }
        x++;
    }
    for(i=x,j=0; i<a; i++,j++)
    {
        s2[j]=s[i];
    }
    for(i=0; i<b; i++)
    {
        if(s1[i]!='0')
        {
            break;
        }
        y++;
    }
    for(i=y,j=0; i<b; i++,j++)
    {
        s3[j]=s1[i];
    }
    m=strlen(s2);
    n=strlen(s3);
    if(m>n)
    {
        printf(">\n");
    }
    else if(m<n)
    {
        printf("<\n");
    }
    else
    {
        for(i=0; i<m; i++)
        {
            p=s2[i]-48;
            q=s3[i]-48;
            if(p>q)
            {
                k=1;
                printf(">\n");
                break;
            }
            else if(p<q)
            {
                k=1;
                printf("<\n");
                break;
            }
        }
        if(k==0)
        {
            printf("=\n");
        }
    }
    return 0;
}
