#include<stdio.h>
int main()
{
    double a,b,c,d,m,n,o,p,z,h,g;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    m=a*2;
    n=b*3;
    o=c*4;
    p=d*1;

    z=(m+n+o+p)/10;

    printf("Media: %.1lf\n",z);
    if(z>=7){
            printf("Aluno aprovado.\n");}
    if(z>=5 && z<7){
     printf("Aluno em exame.\n");
    scanf("%lf", &h);
        printf("Nota do exame: %.1lf\n",h);
        g=(z+h)/2;
        if(g>5){
                printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", g);

    }


    if (z<5){
        printf("Aluno reprovado.\n");
    }


    return 0;
}
