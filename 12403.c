#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,e,i,w=0;
    char x[100],y[100];
    scanf("%d",&b);
    for(i=0; i<b; i++)
    {
        scanf("%s",x);
        if(strcmp(x,"donate")==0)
        {
            scanf("%d",&a);
            w+=a;
        }
        if(strcmp(x,"report")==0)
        {
            printf("%d\n",w);
        }
    }
    return 0;


}
