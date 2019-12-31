#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i=0;
    char x[10000];
    scanf("%d",&b);
    for(c=0; c<b; c++)
    {
        scanf("%s",x);
        a=strlen(x);
        if (strcmp(x, "1") == 0 || strcmp(x, "4") == 0 || strcmp(x, "78") == 0)
            printf("+\n");

        else if(x[a-1]=='5' && x[a-2]=='3')
        {
            printf("-\n");
        }
        else if(x[0]=='9' && x[a-1]=='4')
        {
            printf("*\n");
        }
        else if(x[0]=='1' && x[1]=='9' && x[2]=='0')
        {
            printf("?\n");
        }
        else
        {
            printf("+\n");
        }
        i++;
    }
    return 0;
}
