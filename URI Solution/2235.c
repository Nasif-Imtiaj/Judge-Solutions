#include<stdio.h>
int main()
{
    int a,b,c,temp,d;

    scanf("%d %d %d", &a,&b,&c);


    if (a < b)

    {
     temp = a;
     a = b;
     b = temp;
     }
   if (b < c)
    {
    temp = b;
    b = c;
    c = temp;
    }
    if (a < b)

    {
    temp = a;
    a = b;
    b = temp;
    }
   d=b+c;
    if(d==a || a==b || b==c || a==c){
        printf("S\n");
    }

    else {
        printf("N\n");
    }

    return 0;


}

