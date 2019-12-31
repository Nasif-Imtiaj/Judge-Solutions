#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,i,j;
    int x[10000],y[10000];

    for(i=0;i<20;i++){
        scanf("%d",&x[i]);
    }
    for(i=20-1,j=0;i>=0;i--,j++){
            y[j]=x[i];
    }
    for(i=0;i<20;i++){
        x[i]=y[i];
        }
    for(i=0;i<20;i++){
    printf("N[%d] = %d\n",i,x[i]);
    }

    return 0;





}
