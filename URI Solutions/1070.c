#include<stdio.h>
int main()
{
    int a,i,z=0;
    scanf("%d", &a);
    for(i=a; z <6;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            z++;
        }
        if(z==6)

            break;
    }
    return 0;
}
