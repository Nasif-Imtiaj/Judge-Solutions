#include<stdio.h>
#include<string.h>
int main()
{

    int a,b,c,i,j,z=0;

    char x[100000],y;

    scanf("%d %d",&a,&b);

    while(gets(x)!=NULL)
    {
        c=strlen(x);
        if(c==a)
        {
            break;
        }
    }
    for(i=0; i<c; i++)
    {
        for(j=0; j<c-1; j++)
        {
            if(x[j]=='B' && x[j+1]=='G')
            {
                y=x[j];
                x[j]=x[j+1];
                x[j+1]=y;
                j++;
            }
        }
        z++;
        if(z==b)
        {
            break;
        }
    }
    printf("%s\n",x);
    return 0;
}
