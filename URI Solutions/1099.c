#include<stdio.h>
int main()
{
    int a,x,y,i,o,temp,w=0;
    scanf("%d", &a);
    for(i=1;i<=a;i++,w=0){
        scanf("%d %d", &x, &y);
        if(x>y){
            temp=x;
            x=y;
            y=temp;}
       for(o=x+1;o<y;o++)
        {
        if(o%2!=0)
          {

          w+=o;
          }

        }

        printf("%d\n",w);
        if(i==a)
        break;
 }
    return 0;
}
