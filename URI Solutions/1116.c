#include<stdio.h>
int main()
{

    int a,x,y,i;
    double c,m,n;
    scanf("%d", &a);
    for(i=1;i<=a;i++){
           {
           scanf("%d %d", &x, &y);
            m=x;
            n=y;
            c=m/n;
               {
         if(n==0){
            printf("divisao impossivel\n");
         }
        else{
        printf("%.1lf\n", c);
         }
              }
           }
        if(i==a)
        break;

    }
    return 0;
}
