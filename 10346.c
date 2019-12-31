#include<stdio.h>
int main()
{
    int a,b,c,d,e,f=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        f=a;
   while(1){
    d=a/b;
    c=a%b;
    f+=d;
   a=d+c;
   if(d==0){
    break;
   }
   }
   printf("%d\n",f);
   f=0;

}
return 0;
}
