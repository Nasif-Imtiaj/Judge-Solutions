#include<stdio.h>
int main()
{
    int a,b,d=0,i,x=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b<a){
       while(scanf("%d",&b)){
        if(b>a){
            break;
        }
       }
    }
    for(i=0;i<1000000;i++){
        d+=a+i;
        x++;
     if(d>b){
        break;
     }

    }
    printf("%d\n",x);
 return 0;
}
