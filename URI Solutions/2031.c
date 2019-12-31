#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,e,i;
    char x[100],y[100];

    scanf("%d",&a);
    for(i=0;i<a;i++){

    scanf("%s",x);
    scanf("%s",y);


    if((strcmp(x,"ataque")==0) && (strcmp(y,"pedra")==0)){
        printf("Jogador 1 venceu\n");
    }
    else if((strcmp(x,"pedra")==0) && (strcmp(y,"papel")==0)){
            printf("Jogador 1 venceu\n");
    }
    else if((strcmp(x,"ataque")==0) && (strcmp(y,"papel")==0)){
            printf("Jogador 1 venceu\n");
    }
    else if((strcmp(x,"papel")==0) && (strcmp(y,"papel")==0)){
            printf("Ambos venceram\n");
    }
    else if((strcmp(x,"pedra")==0) && (strcmp(y,"pedra")==0)){
            printf("Sem ganhador\n");
    }
   else if((strcmp(x,"ataque")==0) && (strcmp(y,"ataque")==0)){
            printf("Aniquilacao mutua\n");
   }
    else{
        printf("Jogador 2 venceu\n");
    }


    }

    return 0;



}
