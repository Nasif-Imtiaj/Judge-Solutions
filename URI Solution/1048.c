#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,x,y,z;
    scanf("%lf", &a);
    b=15;
    c=12;
    d=10;
    e=7;
    f=4;
   if(a>=0 && a<=400){
            x=(a+(a*(b/100)));
            y=x-a;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 15 % %\n", x, y);
    }
    else if(a>400 && a<=800){
            x=(a+(a*(c/100)));
            y=x-a;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 12 % %\n", x, y);
    }
    else if(a>800 && a<=1200){
            x=(a+(a*(d/100)));
            y=x-a;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 10 % %\n", x, y);
    }
    else if(a>1200 && a<=2000){
            x=(a+(a*(e/100)));
            y=x-a;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 7 % %\n", x, y);
    }
    else if(a>2000){
            x=(a+(a*(f/100)));
            y=x-a;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 4 % %\n", x, y);
    }

    return 0;
}
