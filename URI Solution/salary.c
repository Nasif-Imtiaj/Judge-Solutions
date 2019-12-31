#include<stdio.h>
int main()
{
    int Number,A;
    scanf("%d %d", &Number,&A);
    Number = Number;
    float B,SALARY;
    scanf("%f", &B);
    SALARY = A*B;
    printf("NUMBER = %d\n", Number);
    printf("SALARY = U$ %0.2f\n", SALARY);
    return 0;
}
