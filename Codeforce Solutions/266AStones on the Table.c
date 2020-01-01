#include<stdio.h>
int main()
{
    int a,b,c,z=0,i;
    char x,y;
    scanf("%d",&a);
    getchar();
    for(i=0; i<a; i++)
    {
        scanf("%c",&x);
        if(i>0)
        {
            if(y==x)
            {
                z++;
            }
        }
        y=x;
    }
    printf("%d\n",z);
    return 0;
}
