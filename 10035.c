#include<stdio.h>
int main()
{
   unsigned long long int a,b,c=0,d,e,x,y,z=0,w=0;
    while(scanf("%llu %llu",&a,&b)!=EOF)
    {
        if(a==0 && b==0)
        {
            break;
        }
        while(1)
        {
            x=a%10;
            a/=10;
            y=b%10;
            b/=10;
            z=x+y+w;
            w=0;
            if(z>9)
            {
                c++;
                w=1;
            }
            z=0;
            if(a==0 && b==0)
            {
                break;
            }
        }
        if(c==1)
            printf("%llu carry operation.\n",c);
       else if(c>1)
            printf("%llu carry operations.\n",c);
        else
        {
            printf("No carry operation.\n");
        }
        c=0;
        z=0;
        w=0;
    }
    return 0;
}
