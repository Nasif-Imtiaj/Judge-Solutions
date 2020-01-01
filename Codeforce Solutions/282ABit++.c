#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,w=0,p=0,q=0,i;
    char x,y,z;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        getchar();
        scanf("%c %c %c",&x,&y,&z);
        if(x=='+' && y=='+' || y=='+' && z=='+')
        {
            p++;
        }
        else if(x=='-' && y=='-' || y=='-' && z=='-')
        {
            q++;
        }
        if(p==1)
        {
            w++;
        }
        if(q==1)
        {
            w--;
        }
        p=0;
        q=0;

    }
    printf("%d\n",w);
    return 0;
}
