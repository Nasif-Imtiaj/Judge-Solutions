#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    double x[1000];

    for(i=0;i<100;i++){
      scanf("%lf",&x[i]);
    }
    for(i=0;i<100;i++){
            if(x[i]<=10){
        printf("A[%d] = %.1lf\n",i,x[i]);
    }
    }


    return 0;

}
