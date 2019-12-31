#include<stdio.h>
int main()
{
    int a[1000];
    int d;
    for(d=0;d<10;d++){
    scanf("%d",&a[d]);
     if(a[d]<=0){
        a[d]=1;
     }
        printf("X[%d] = %d\n",d,a[d]);
    }

    return 0;
    }





