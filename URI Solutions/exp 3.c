#include<stdio.h>
int main(){
int M,N,i ,Sum=0;
while(scanf("%d%d",&M,&N)!=EOF){
if(M<=0 ||N<=0)
{
  break;
}
else if(M>N)
{
    for(i=N;i<=M;i++)

{printf("%d ",i);
 Sum+=i;}

}
 else if(N>M)
{
    for(i=M;i<=N;i++)
    {
        printf("%d ",i);
 Sum+=i;   }

}
printf("Sum=%d\n",Sum);
Sum=0;
}
return 0;

}
