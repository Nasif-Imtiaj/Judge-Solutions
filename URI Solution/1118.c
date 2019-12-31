#include<stdio.h>
int main()
{
    int x,i;
    double a,b,c;
   for(i=0;i<10000000;i++){
    scanf("%lf",&a);
    if(a<0 || a>=10){
        printf("nota invalida\n");
        while(scanf("%lf",&a)){
             if(a>=0 && a<=10){
                break;
            }
        printf("nota invalida\n");
        }
    }
    scanf("%lf",&b);
    if(b<0 || b>=10){
        printf("nota invalida\n");
        while(scanf("%lf",&b)){
            if(b>=0 && b<=10){
                break;
            }
        printf("nota invalida\n");
        }
    }
    c=(a+b)/2;
    printf("media = %.2lf\n",c);


    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&x);
    if(x<1 || x>2){
        printf("novo calculo (1-sim 2-nao)\n");
        while(scanf("%d",&x)){
            if(x==1 || x==2){
                break;
            }
        printf("novo calculo (1-sim 2-nao)\n");
        }
    }


    if(x==2){
        break;
    }


   }


return 0;

}
