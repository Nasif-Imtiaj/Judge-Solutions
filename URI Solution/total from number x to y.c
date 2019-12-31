#include<stdio.h>
int main()
{
    long int a,b,d=0,i;

    scanf("%ld %ld",&a, &b);
    for(i=a;i<=b;i++){
            d+=i;

    }
   printf("%ld\n",d);


}

