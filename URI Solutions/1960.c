#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,x,y;

    scanf("%d",&a);
    c=a/500;
    a%=500;

    for(i=0;i<c;i++){
        printf("D");
    }


    d=a/100;
    a%=100;
    for(i=0;i<d;i++){
        printf("C");
    }
    e=a/50;
    a%=50;
    for(i=0;i<e;i++){
        printf("L");
    }
    f=a/10;
    a%=10;
    for(i=0;i<f;i++){
        printf("X");
    }
    g=a/5;
    a%=5;
    for(i=0;i<g;i++){
        printf("V");
    }
    h=a/1;
    a%=1;
    for(i=0;i<h;i++){
        printf("I");
    }


    return 0;





}
