#include<stdio.h>
int main()
{
    int a,b,c[100],d=0,i;
    scanf("%d",&a);
  while(a>0){

    c[d++]=a%16;
    a/=16;
}
  for(i=d-1;i>=0;i--){
    if(c[i]==0){
        printf("0");
    }
    if(c[i]==1){
        printf("1");
    }
    else if(c[i]==2){
        printf("2");
    }
    else if(c[i]==3){
        printf("3");
    }
   else if(c[i]==4){
        printf("4");
    }
    else if(c[i]==5){
        printf("5");
    }
   else if(c[i]==6){
        printf("6");
    }
   else if(c[i]==7){
        printf("7");
    }
   else if(c[i]==8){
        printf("8");
    }
   else if(c[i]==9){
        printf("9");
    }
   else if(c[i]==10){
        printf("A");
    }
   else if(c[i]==11){
        printf("B");
    }
   else if(c[i]==12){
        printf("C");
    }
   else if(c[i]==13){
        printf("D");
    }
   else if(c[i]==14){
        printf("E");
    }
   else if(c[i]==15){
        printf("F");
    }
}


printf("\n");

    return 0;






}
