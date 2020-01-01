#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0,c,d,z=1,w=1,i,j;
    char x[1000];
    scanf("%s",x);
    a=strlen(x);
    for(i=0; i<a-1; i++)
    {
        if(x[i]=='0' && x[i+1]=='0')
        {
            z++;
        }
        else
        {
            z=1;
        }
        if(x[i]=='1' && x[i+1]=='1')
        {
            w++;
        }
        else
        {
            w=1;
        }
        if(z>=7 || w>=7)
        {
            b=1;
        }
    }
    if(b!=0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
