#include<stdio.h>
int main()
{
  double a,c,b=0,d,j=1;

  while(scanf("%lf",&a)!=EOF){

        if(a>=1 && a<=10){
      b+=a;
      c=j++;
    }
    else{
        printf("nota invalida\n");
    }

    if(c==2)
        break;
  }
  d=b/2;
  printf("media = %0.2lf\n",d);
  return 0;

}
