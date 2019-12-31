#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,y,z;

    scanf("%lf %lf %lf", &a,&b,&c);

    x=(b*b)-(4*a*c);

    if(a>0 && x>0){
        y=(-b+sqrt(x))/(2*a);
        z=(-b-sqrt(x))/(2*a);

        printf("R1 = %0.5lf\nR2 = %0.5lf\n",y,z);
        }
        else{
            printf("Impossivel calcular\n");
        }
        return 0;
}
