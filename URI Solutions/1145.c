#include<stdio.h>
int main()
{
    int a,b,i,x=0;

    scanf("%d %d", &a,&b);
    for(i=1;i<=b;i++){
            x++;
            if(x==a){
                printf("%d",i);
            }
            else{
                printf("%d ",i);
            }
            if(x==a){
                x=0;
                printf("\n");
            }

    }
    return 0;



}
