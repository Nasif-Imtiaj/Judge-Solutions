#include<stdio.h>
int main()
{
   int a,b,c,e,d,i,j,z=0,w=0;

   scanf("%d %d",&b,&a);
   while(1)
{
    if(a==1)
  {
      break;
  }
  if(a%2==0){
    a=a/2;
  }
  else{
    a=a*3+1;
  }
    printf("%d\n",a);
  w++;
}


printf("%d",w+1);
return 0;
}
