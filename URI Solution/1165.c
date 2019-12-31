#include<stdio.h>
int main()
{
    int a,i,b,z=0,n,m;
    scanf("%d", &n);
    for(m=1;m<=n;m++){
    scanf("%d", &a);
    for(z=0,i=1;i<=a;i++){
    if(a%i==0){
        z++;
    }
    }
    if(z==2){
        printf("%d eh primo\n",a);
    }
   else{
        printf("%d nao eh primo\n",a);
    }
    }
    return 0;


}

