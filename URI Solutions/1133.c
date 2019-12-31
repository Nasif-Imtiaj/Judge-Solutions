#include<stdio.h>
int main()
{
   int a,b,i,c;
   scanf("%d %d", &a ,&b);
   if(a>b){
    c=a;
    a=b;
    b=c;
   }
    for(i=a+1;i<b;i++)
    {
        if(i%5==2 || i%5==3){
        printf("%d\n",i);
        }
    }
    return 0;
}
