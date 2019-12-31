#include<stdio.h>
int main()
{
   int a,b=0,c,d;
   while(scanf("%d",&a)!=EOF){
        if(a==0){
            break;
        }
    if(a<=100){
        printf("f91(%d) = 91\n",a);
    }
    else{
        b=a-10;
        printf("f91(%d) = %d\n",a,b);
    }
    b=0;
   }
   return 0;
}
