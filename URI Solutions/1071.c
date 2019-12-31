#include<stdio.h>
int main()
{
    int a,b,i,c=0,temp;
    scanf("%d %d", &a, &b);

    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }

    for(i=a+1; i<b;i++)
    {
        if(i%2!=0)
        {
            c+=i;

        }
        if (i > b)

            break;
    }
    printf("%d\n",c);
    return 0;
}

