#include<stdio.h>
#include<string.h>
int main()
{
   int a,b,c;
   char x[1000000];
   scanf("%d",&c);
   while(c--)
   {
    scanf("%s",x);
    a=strlen(x);

    b=17+((a-1)*2);
    printf("%d leds\n",b);
}
return 0;





}
