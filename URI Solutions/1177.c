#include<stdio.h>
int main()
{

    int a,i;
    int x[10000];
    scanf("%d",&a);

    for(i=0;i<a;i++){
            x[i]=i;

    }

    for(i=a;i<10000;i++){
      x[i]=x[i-a]+x[i];
    }
    for(i=0;i<100;i++){
        printf("N[%d] = %d\n",i,x[i]);
    }



    return 0;



}
