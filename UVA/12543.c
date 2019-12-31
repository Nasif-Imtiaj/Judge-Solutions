#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    int a,b=0,c,d,e,i,j;
    char x[100000],y[1000];
    while(scanf("%s",x))
    {
        if(strcmp(x,"E-N-D")==0)
        {
            break;
        }
        a=strlen(x);
        if(a>b && ((x[0]>=97 && x[0]<=122) || x[0]=='-' || (x[0]>=65 && x[0]<=90)) && ((x[a-1]>=97 && x[a-1]<=122) || x[a-1]=='-' || (x[a-1]>=65 && x[a-1]<=90)))
        {

            strcpy(y,x);
            b=a;
        }

    }
    c=strlen(y);
    for(j=0;j<c;j++)
    {
        if(y[j]<97 && y[j]!='-'){
            y[j]=y[j]+32;
        }
    }
    printf("%s\n",y);
    return 0;
}
