#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,z=0,w=0;
    char x[1000],y[1000],m,n;
    scanf("%s %s",x,y);
    a=strlen(x);

    for(i=0; i<a; i++)
    {
        if(x[i]<91)
        {
            x[i]=x[i]+32;
        }
        if(y[i]<91)
        {
            y[i]=y[i]+32;
        }

        if(x[i]>y[i])
        {
            printf("1\n");
            z=1;
            break;
        }
        else if(x[i]<y[i])
        {
            printf("-1\n");
            z=1;
            break;
        }
    }
    if(z==0)
    {
        printf("0\n");
    }
    return 0;
}
