#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j,k;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d %d",&a,&b);
        for(k=0; k<b; k++)
        {
            for(i=1; i<=a; i++)
            {
                for(j=0; j<i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(i=a-1; i>0; i--)
            {
                for(j=0; j<i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }

            if(k<b-1)
            {
                printf("\n");
            }
        }
        if(c>0)
        {
            printf("\n");
        }
    }
    return 0;
}
