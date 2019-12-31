#include<stdio.h>
int main()
{
  int a,i;
  double b,c,d,e,f;
  scanf("%d",&a);
  b=1;
  d=6;
  c=b/d;
if(a==0){
    c=0;
}
else if(a>=1){
        a=a-1;
for(i=0;i<a;i++){
    c=b/(d+c);
}
}
   e=3+c;
  printf("%.10lf\n",e);
return 0;
}
