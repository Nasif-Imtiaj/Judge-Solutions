#include<stdio.h>
int main()
{
   int a,i,c=0;

    while(scanf("%d",&a)!=EOF){
               for(i=1;i<=a;i++){
                    c++;
            if(c==a){
                printf("%d",i);}
                else{
                    printf("%d ",i);
                }
            if(c==a){
                    c=0;
                printf("\n");
            }

            }
          if(a==0)
            break;

          }
          return 0;
}

