#include<stdio.h>
int main()
{
   int a, b, c,x,y,z;
   scanf("%d %d %d", &a, &b, &c);
   x=10000000;
   y=10000000;
   z=10000000;
   if (a<x){
    x=a;
   }
   if(b<x){
    x=b;
   }
   if(c<x){
    x=c;
   }
   if(a<y && a!=x){
    y=a;
   }
   if(b<y && b!=x){
    y=b;
   }
   if(c<y && c!=x){
    y=c;
   }
   if(a<z && a!=x && a!=y){
    z=a;
   }
   if(b<z && b!=x && b!=y){
    z=b;
   }
   if(c<z && c!=x && c!=y){
    z=c;
   }
   printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", x,y,z,a,b,c);
   return 0;
}
