#include<stdio.h>
int main()
{

    int a,b,c,d,i;
   long long int x[1000];
    scanf("%d",&d);
for(c=0;c<d;c++){

    scanf("%d",&a);
      x[0]=0;
      x[1]=1;
    if(a==0){
        printf("Fib(0) = 0\n");
    }
    else if(a==1){
        printf("Fib(1) = 1\n");
    }
   else{
        for(i=2;i<1000;i++){
       x[i]=x[0]+x[1];
       x[0]=x[1];
       x[1]=x[i];
}
    printf("Fib(%d) = %lld\n",a,x[a]);


}
}
return 0;



}
