#include<stdio.h>
#include<math.h>
int main()
{
    double c,d;
    int x=0,m,a,b,i,e,f;

    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        x=0;
        scanf("%d %d %lf %lf",&a,&b,&c,&d);
        while(a<=b)
        {
            a*=(c/100)+1;
            b*=(d/100)+1;
            x++;
            if(x>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }

        }

           if(x<=100)
            {
                printf("%d anos.\n",x);
            }
    }


    return 0;

}
