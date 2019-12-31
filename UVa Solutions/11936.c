#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&e);
    while(e--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c && b+c>a && a+c>b)
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}
