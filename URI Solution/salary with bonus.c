#include<stdio.h>
int main()
{
  char c;

  scanf("%10c", &c);

 double X,Y,TOTAL;

 scanf("%lf %lf", &X, &Y);
 TOTAL = (X + Y/100*15);

 printf("TOTAL = R$ %2lf\n", TOTAL);

 return 0;

}
