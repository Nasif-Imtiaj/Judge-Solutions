#include<stdio.h>
int main()
{
   int a,b,c,i,w=0;

   scanf("%d %d", &a, &b);
   if(a>b){
    c=a;
    a=b;
    b=c;
   }
   for(i=a;i<=b;i++){
   if(i%13!=0)
    w+=i;
    }
   printf("%d\n",w);
      return 0;
}

