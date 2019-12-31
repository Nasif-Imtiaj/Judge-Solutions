#include<stdio.h>
int main()
{
    int x,y;
  while(scanf("%d %d", &x, &y)!=EOF){

           {

           if (x>y){
                    printf("Decrescente\n");

            }
            if (y>x) {
                printf("Crescente\n");
            }
            if(x==y){
                printf("");
            }
           }
            if(x==y)
            break;

        }
    return 0;
}
