#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char x[100000],y[100000],z;
    scanf("%s",x);
    strlwr(x);
    x[0]=toupper(x[0]);
    printf("%s",x);
    return 0;
}
