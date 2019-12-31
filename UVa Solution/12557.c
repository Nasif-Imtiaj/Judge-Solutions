#include<stdio.h>
#include<string.h>
int main()
{
    int i=1;
    char x[1000];
    while(gets(x)!=NULL)
    {
        if(strcmp(x,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(strcmp(x,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
        if(strcmp(x,"*")==0)
        {
            break;
        }
    }
    return 0;
}
