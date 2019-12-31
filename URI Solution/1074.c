#include<stdio.h>
int main()
{
    int a,b,i;
   scanf("%d", &b);
  for(i=1;i<=b;i++){
        scanf("%d", &a);{
        if(a<0 && a%2!=0){
    printf("ODD NEGATIVE\n");
    }
    if(a<0 && a%2==0){
        printf("EVEN NEGATIVE\n");
    }
    if(a==0){
        printf("NULL\n");
    }

    if(a>0 && a%2==0){
        printf("EVEN POSITIVE\n");
    }
    if(a>0 && a%2!=0){
        printf("ODD POSITIVE\n");
    }
        }
        if (i==b)
        break;
}
    return 0;
}
