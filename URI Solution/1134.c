#include<stdio.h>
int main()
{
    int a,w=0,x=0,z=0,j=1;

    while(scanf("%d", &a) !=EOF){
        if(a==1){
            w+=j;
            }
        if(a==2){
           x+=j;
        }
        if(a==3){
            z+=j;
        }
        if(a==4)
        break;

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",w);
    printf("Gasolina: %d\n",x);
    printf("Diesel: %d\n",z);

    return 0;

}
