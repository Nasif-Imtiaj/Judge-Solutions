#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    int a,b,c,i,z;
    char x[10000];
    scanf("%s",x);
    a=strlen(x);
    for(i=0; i<a; i++)
    {
        if(x[i]!='a' && x[i]!='e' && x[i]!='i' && x[i]!='o' && x[i]!='u' && x[i]!='y' && x[i]!='A' && x[i]!='E' && x[i]!='I' && x[i]!='O' && x[i]!='U' && x[i]!='Y')
        {
            printf(".%c",tolower(x[i]));
        }
    }
    printf("\n");
    return 0;
}
