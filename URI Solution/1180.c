#include<stdio.h>
int main()
{
  int b,i,e=0,f=0;
  int a[1000];

  scanf("%d", &b);
  for(i=0;i<b;i++){
        scanf("%d", &a[i]);
        if(a[i]<e)
        {
            e=a[i];
            f=i;
        }
        }
         printf("Menor valor: %d\nPosicao: %d\n",e,f);
    return 0;

}
