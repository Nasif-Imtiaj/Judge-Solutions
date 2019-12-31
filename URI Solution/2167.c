#include<stdio.h>
int main()
{
    int a,b,c,d=0,i;
    int flag=0;
    int x[1000];
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=1; i<a; i++)
    {
        if(x[i+1]<x[i])
           {
            flag=i+1;
            break;
        }
    }
    printf("%d\n",flag);


    return 0;
}
