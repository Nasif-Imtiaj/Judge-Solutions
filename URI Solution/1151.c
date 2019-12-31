#include<stdio.h>
int main()
{
  int a,b,c,d,k,l;
  scanf("%d",&l);
  a=0;
  b=1;
  k=l-2;
  printf("0 1");
   for(c=0;c<k;c++){
   d=a+b;
   a=b;
   b=d;
   printf(" %d",d);

   }
   printf("\n");
    return 0;
}

