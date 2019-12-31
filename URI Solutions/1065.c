#include<stdio.h>
int main()
{
    int a,b,c,d,e,z=0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    {
    if(a%2==0)
        z++;
    }
    {
    if(b%2==0)
        z++;
    }
    {
    if(c%2==0)
        z++;
    }
    {
    if(d%2==0)
        z++;
    }
    {
    if(e%2==0)
        z++;
    }
    printf("%d valores pares\n", z);
    return 0;
}





