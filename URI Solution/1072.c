#include<stdio.h>
int main()
{
    int a,b,i,z=0,w=0;
    scanf("%d", &b);
    for(i=1;i<=b;i++){
        scanf("%d", &a);{
        if (a>=10 && a<=20){
            z++;
            }
        else {
            w++;
            }
        }

      if(i==b)
        break;
    }
      printf("%d in\n",z);
      printf("%d out\n",w);
    return 0;
}
