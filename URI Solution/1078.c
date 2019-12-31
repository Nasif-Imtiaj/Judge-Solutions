#include<stdio.h>
int main()
{
    int a,i=1;
    scanf("%d", &a);

    while (i<=10){
        printf("%d x %d = %d\n", i, a, i*a);
        i = i + 1;
    }
    return 0;
}
