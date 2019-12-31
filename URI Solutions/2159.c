#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    double b,c,d;
    scanf("%d",&a);

    b=a/(log(a));
    c=1.25506*(a/(log(a)));

    printf("%.1lf %.1lf\n",b,c);


    return 0;







}
