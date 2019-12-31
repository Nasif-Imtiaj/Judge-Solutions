#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    double x;
    scanf("%d",&a);

    x=((pow(((1+sqrt(5))/2),a))-(pow(((1-sqrt(5))/2),a)))/sqrt(5);

    printf("%.1lf\n",x);

    return 0;





}
