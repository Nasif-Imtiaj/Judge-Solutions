#include<stdio.h>
int main()
{
    double a,b,c,d=0;
    a=1;
    b=1;
    for(a=1;a<=39;a=a+2,b=b*2){
        c=a/b;
        d+=c;

    }
    printf("%.2lf\n",d);
    return 0;

}
