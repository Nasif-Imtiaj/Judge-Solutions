#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,i,j,z=0,x=2,y=0;

    cin>>a;

    for(i=0;i<a;i++)
   {
      for(j=0;j<a*2-z;j++)
      printf(" ");
      if(i>0)
      for(j=0;j<=i;j++){
        printf("%d ",j);
      }
      for(j=i-1;j>0;j--){
        printf("%d ",j);
      }

      printf("0");
      printf("\n");
      z=z+2;
   }
   for(i=0;i<=a;i++)
   {
       printf("%d ",i);
   }
   for(i=a-1;i>0;i--)
   {
       printf("%d ",i);
   }
   printf("0\n");
   for(i=a-1;i>=0;i--)
   {
      for(j=0;j<x;j++)
      printf(" ");
      if(i!=0)
      for(j=0;j<=i;j++)
      {
          printf("%d ",j);
      }
      for(j=i-1;j>0;j--){
        printf("%d ",j);
      }
      //if(i!=0)
      printf("0");
      printf("\n");
      x=x+2;
   }
return 0;
}
