#include<stdio.h>
int main()
{
    int a[102],b=0,c=0,i ;

    for(i=1;i<=100;i++){
            scanf("%d", &a[i]);
            if(a[i]>b){
                b=a[i];
                c=i;
                }

                }
    printf("%d\n%d\n",b,c);
    return 0;
}
