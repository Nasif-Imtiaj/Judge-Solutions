#include<stdio.h>
int main()
{
    int a,i,z=0,c=0;

    while(scanf("%d",&a)!=EOF){
   z=0;
   c=0;
   for(i=a;z <5;i++)
    {
        if(i%2==0)
        {
            z++;
            c+=i;
        }
    }
    if(a==0)
        break;
        printf("%d\n",c);
}    return 0;
}



