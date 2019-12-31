#include<stdio.h>
int main()
{
   int a,b,c,d;
   while(scanf("%d",&a)!=EOF){
   b=a/6;
   if(b*6==a || a==0){
    printf("Y\n");
   }
   else{
    printf("N\n");
   }
   }
return 0;
}
