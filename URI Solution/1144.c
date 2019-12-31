#include<stdio.h>
int main()
{
    int a,b,c,d,i;

    scanf("%d", &d);
    a=1;
    b=1;
    c=1;

    for(i=0;i<d;i++,a=a+1,b=a*a,c=b*a){
                printf("%d %d %d\n",a,b,c);
                printf("%d %d %d\n",a,b+1,c+1);
        }

    return 0;



}
