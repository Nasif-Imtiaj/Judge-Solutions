#include<stdio.h>
int main()
{
  double b,c,d,j,k;
  int a,i;
  scanf("%d",&a);
  b=1;
  c=2;
  d=b/c;
if(a==0){
    d=0;
}
else{
     a=a-1;
  for(i=0;i<a;i++){

    d=b/(c+d);
    }

}
  k=1+d;

    printf("%.10lf\n",k);

}
