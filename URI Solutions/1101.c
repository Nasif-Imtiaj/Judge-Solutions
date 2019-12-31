#include<stdio.h>
int main()
{
    int a,b,i,c,temp,w=0;
    while(w=0,scanf("%d %d", &a, &b)!=EOF){
    {
        if(a>b){
        temp=a;
        a=b;
        b=temp;
               }

        for(i=a;i<=b;i++){
                if(a<=0 || b<=0){
                    printf("");
                }
                else
               {w+=i;
               printf("%d ",i);

                }
                }

            if(w>0){printf("Sum=%d\n",w);}
            else{
             printf("");
            }
    }
            if(a<=0 || b<=0)
                break;
                printf("");
        }

  return 0;
}
