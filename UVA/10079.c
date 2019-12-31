#include<stdio.h>
int main()
{
   unsigned long long int a,b,c,d;
    while(scanf("%llu",&a)!=EOF)
    {
        if(a<0)
        {
            break;
        }
        else
        b=(a*(a+1))/2;
        printf("%llu\n",b+1);
    }
    return 0;
}
