#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j,z=0,w=0;
    scanf("%d",&e);
    while(e--)
    {
        scanf("%d",&a);
        for(i=0; i<a; i++)
        {
            scanf("%d %d %d",&b,&c,&d);
            z+=b*d;
        }
        printf("%d\n",z);
        z=0;
    }
    return 0;
}
