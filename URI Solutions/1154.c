#include<stdio.h>
int main()
{
  int a,c,w=0,j=1;
  double x,y,d;
while(scanf("%d",&a)!=EOF){
     if(a>0)
        {w+=a;
        c=j++;
        }
      if(a<0)
            break;
    }
    x=w;
    y=c;
    d=x/y;
    printf("%0.2lf\n", d);

    return 0;

}
