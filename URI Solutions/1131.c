#include<stdio.h>
int main()
{

    int a,b,c,i,x=0,y=0,z=0,w=0;

    for(i=0;i<10000000;i++){
        scanf("%d %d",&a,&b);
        x++;
        if(a>b){
            y++;
        }
        if(b>a){
            z++;
        }
        if(a==b){
            w++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&c);
        if(c==2){
            break;
        }
        }



    printf("%d grenais\n",x);
    printf("Inter:%d\n",y);
    printf("Gremio:%d\n",z);
    printf("Empates:%d\n",w);
    if(y>z){
        printf("Inter venceu mais\n");
    }
    else if(z>y){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Não houve vencedor\n");
    }



    return 0;
}
