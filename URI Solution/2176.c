#include<stdio.h>
#include<string.h>
int main()
{
    int c,d,x=0,y=0,z=0,i,w=0;
    char b[1000];
    scanf("%s",b);
    d=strlen(b);
    for(i=0; i<d; i++)
    {
        int a=b[i]-'0';
        if(a==1)
        {
            w++;
        }
    }
    printf("%s",b);
    if(w%2==0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
    return 0;
}
