#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d", &a);
    while(b<10000){
        b++;
       if(b%a==2){ printf("%d\n",b);
           }

    }
    return 0;
}
