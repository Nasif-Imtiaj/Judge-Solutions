#include<stdio.h>
#include<string.h>
int main()
{
   int a,b,c;
   char d[100];
   scanf("%d",&a);

   for(b=0;b<a;b++){
     scanf("%s%d",d,&c);

     if(strcmp(d,"Thor")==0){
        printf("Y\n");
     }
     else{
        printf("N\n");
     }
    }
   return 0;




}
