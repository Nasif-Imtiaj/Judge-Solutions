#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,e=0,f,i,j,x[5],y[5],z;


    for(i=0;i<15;i++){
        scanf("%d",&z);
        if(z%2==0){
            x[c]=z;
            c++;
            if(c==5){
            for(j=0;j<5;j++){
                printf("par[%d] = %d\n",j,x[j]);
                x[j]=0;
            }
               c=0;
        }

        }
        else{
            y[e]=z;
            e++;
            if(e==5){
                for(j=0;j<5;j++){
                    printf("impar[%d] = %d\n",j,y[j]);
                  y[j]=0;
                }
                e=0;
            }

        }

    }
    for(i=0;i<5;i++){
        if(y[i]==0)break;
        else{
            printf("impar[%d] = %d\n",i,y[i]);
        }
    }
    for(i=0;i<5;i++){
        if(x[i]==0)break;
        else{
            printf("par[%d] = %d\n",i,x[i]);
        }
    }


    return 0;




}
