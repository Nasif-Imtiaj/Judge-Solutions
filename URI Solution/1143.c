#include<stdio.h>
int main()
{
    int a,b,c,d,i;

    a=1;
    b=1;
    c=1;
    scanf("%d", &d);
    for(i=0;i<d;i++,a=a+1,b=a*a,c=b*a){

            printf("%d %d %d\n", a,b,c);
    }
    return 0;
}
