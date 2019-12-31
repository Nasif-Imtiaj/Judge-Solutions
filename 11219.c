#include<stdio.h>
int main()
{
    int a1,b1,c1,d,e,f,y,z,i=1,T=0,a,b=0,c;
    int a2,b2,c2;
    char x;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d %c %d %c %d",&a1,&x,&b1,&x,&c1);
        scanf("%d %c %d %c %d",&a2,&x,&b2,&x,&c2);

            z=c1-c2;
        if(c1==c2)
        {
            if(b2==b1 &&  a1<a2 || b1<b2)
            {
                printf("Case #%d: Invalid birth date\n",i);
                T=1;
            }
            else{
                z=0;
            }
        }
        if( b2==b1 && a1<a2 || b1<b2)
            {
                z=z-1;
            }
        if(z>130 && T==0)
        {
            printf("Case #%d: Check birth date\n",i);
            T=1;
        }
        if(z<0 && T==0){
           printf("Case #%d: Invalid birth date\n",i);
            T=1;
        }
        if(T==0)
            printf("Case #%d: %d\n",i,z);

        i++;
        T=0;
    }
    return 0;
}
