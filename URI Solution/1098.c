#include<stdio.h>
int main()
{
    double i,j;
    for(i=0;i<=2;i=i+0.2){
        for(j=1;j<=3;j++){
            printf("I=%g J=%g\n", i, i+j);
        }

    }
    return 0;
}
