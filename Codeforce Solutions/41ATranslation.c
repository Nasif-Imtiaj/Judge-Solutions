#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;

    char x[10000],y[1000],z[1000];

    scanf("%s %s",x,y);
    strrev(x);
    if(strcmp(x,y)==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


return 0;
}
