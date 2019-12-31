#include<stdio.h>
int main()
{
    int a,b,c,d;

    scanf("%d %d %d",&a,&b,&c);

    d=b+c;
    if(d<=a){

        printf("Farei hoje!\n");
    }
    else {
        printf("Deixa para amanha!\n");
    }


    return 0;

}
