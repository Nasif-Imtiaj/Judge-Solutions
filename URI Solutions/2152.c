#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d",&d);
    for(i=0;i<d;i++){
    scanf("%d %d %d",&a,&b,&c);

     if(c==0){

        printf("%02d:%02d - A porta fechou!\n",a,b);
      }
      else if(c==1){
         printf("%02d:%02d - A porta abriu!\n",a,b);
      }

    }
return 0;

}
