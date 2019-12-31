#include<stdio.h>
#include<string.h>
int main()
{
    int a,c,d,i;
    double b;
    char x[100000];

    scanf("%d",&c);
    for(i=0; i<c; i++)
    {
        scanf("%s",x);
        a=strlen(x);
        b=(double)a/100;

        printf("%.2lf\n",b);
    }
    return 0;









}
