#include<stdio.h>
#include<string.h>
int main()
{

    int a,b,i;
    char m[20],n[20];

    scanf("%d",&a);

    for(i=1;i<=a;i++){
        scanf("%s",m);
        scanf("%s",n);
        if((strcmp(m,"tesoura")==0) && (strcmp(n,"papel")==0)){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if((strcmp(m,"papel")==0) && (strcmp(n,"pedra")==0)){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if((strcmp(m,"pedra")==0) && (strcmp(n,"lagarto")==0)){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if((strcmp(m,"lagarto")==0) && (strcmp(n,"Spock")==0)){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if((strcmp(m,"Spock")==0) && (strcmp(n,"tesoura")==0)){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if((strcmp(m,"tesoura")==0) && (strcmp(n,"lagarto")==0)){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if((strcmp(m,"lagarto")==0) && (strcmp(n,"papel")==0)){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if((strcmp(m,"papel")==0) && (strcmp(n,"Spock")==0)){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if((strcmp(m,"Spock")==0) && (strcmp(n,"pedra")==0)){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if((strcmp(m,"pedra")==0) && (strcmp(n,"tesoura")==0)){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if(strcmp(m,n)==0){
            printf("Caso #%d: De novo!\n",i);
        }
        else {
            printf("Caso #%d: Raj trapaceou!\n",i);
        }



    }




return 0;


}
