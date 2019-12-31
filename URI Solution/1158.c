#include<stdio.h>
int main()
{
    int x,y,a,i,z=0,d,c=0;

    scanf("%d",&x);

 for(y=1;y<=x;y++)
   {scanf("%d %d", &a,&d);
   z=0;
   c=0;
   for(i=a;z <d;i++)
    {
        if(i%2!=0)
        {
            z++;
            c+=i;
        }
    }
    printf("%d\n",c);
}    return 0;
}


