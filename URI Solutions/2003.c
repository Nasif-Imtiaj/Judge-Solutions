#include<stdio.h>
int main()
{
    int a,b,c,d;
    char x;
    while(scanf("%d%c%d",&a,&c,&b)!=EOF){
        d=(a*60+b)-(7*60);
        if(d>0){
            printf("Atraso maximo: %d\n",d);
        }
        else{
            printf("Atraso maximo: 0\n");
        }

    }
    return 0;
}

