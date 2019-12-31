#include<stdio.h>
int main()
{
 double a,b,c,d;
 char x[1000];
 scanf("%s %lf %lf",x,&a,&b);
 c=((b/100)*15);
 d=a+c;
 printf("TOTAL = R$ %.2lf\n",d);

 return 0;
}
