#include<stdio.h>
int main()
{
    int i,j,a=7,b=5;

    for(i=1;i<=9;i=i+2){
            for(j=6;j>=4;j--){

            printf("I=%d J=%d\n",i,i+j);
            }
    }
    return 0;
}
