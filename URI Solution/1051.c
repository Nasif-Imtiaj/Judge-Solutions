#include<stdio.h>
int main()
{
     double a,b,c,d,x,y;
     scanf("%lf", &a);
     b=8;
     c=18;
     d=28;
     if(a>=0 && a<=2000){
          printf("Isento\n");
     }
     else if(a>2000 && a<=3000){
        x=(a-2000);
        y=(x*(b/100));
        printf("R$ %0.2lf\n",y);
     }
     else if(a>3000 && a<=4500){
        x=a-3000;
        y=((1000*8/100)+(x*(c/100)));
        printf("R$ %0.2lf\n",y);
     }
     else if(a>4500){
        x=(a-4500);
        y=((1000*8/100)+(1500*18/100)+(x*(d/100)));
        printf("R$ %0.2lf\n",y);
     }
     return 0;
}
