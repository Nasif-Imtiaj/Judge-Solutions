#include<stdio.h>
int main()
{
    int b,c=0;
    int a[100000];

    for(b=1;b<=9;b++){
        scanf("%d", &a[b]);
        c+=a[b];
        }
    if(c%9==1){
        printf("Dasher\n");
    }
    else if(c%9==2){
        printf("Dancer\n");
    }
    else if(c%9==3){
        printf("Prancer\n");
    }
    else if(c%9==4){
        printf("Vixen\n");
    }
    else if(c%9==5){
        printf("Comet\n");
    }
    else if(c%9==6){
        printf("Cupid\n");
    }
    else if(c%9==7){
        printf("Donner\n");
    }
    else if(c%9==8){
        printf("Blitzen\n");
    }
    else if(c%9==0){
  printf("Rudolph\n");}


return 0;


}
