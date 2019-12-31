#include<stdio.h>
int main()
{
  int a,b,c,d,i;

  scanf("%d", &d);
  a=1;
  b=2;
  c=3;
  for(i=0;i<d;i++,a=a+4,b=b+4,c=c+4){

    printf("%d %d %d PUM\n",a,b,c);
  }
  return 0;

}
