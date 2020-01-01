#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j,z=0;
    scanf("%d",&d);
    while(d--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>0 && b>0 || a>0 && c>0 || a>0 && b>0 && c>0 || b>0 && c>0){
            z++;
        }
    }
   printf("%d\n",z);

return 0;
}
