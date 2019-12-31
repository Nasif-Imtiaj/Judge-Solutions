#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j,k,l,x=0,y=0,z;
    for(d=1; d<=75; d++)
    {
        scanf("%d",&a);
        for(x=0,y=0,i=0; i<a; i++)
        {
            scanf("%d",&b);
            if(b>0)
            {
                x++;
            }
            else if(b==0)
            {
                y++;
            }
        }
        z=x-y;
        if(a==0)
        {
            break;
        }
        printf("Case %d: %d\n",d,z);
    }
    return 0;


}
