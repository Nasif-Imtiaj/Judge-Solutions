#include<stdio.h>
int main()
{
    int a,b,c,d,e,z=0,x=0,y=0,w=0;
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    {
       {
           if(a%2==0)
            z++;
       }
       {
           if(b%2==0)
            z++;
       }
       {
           if(c%2==0)
            z++;
       }
       {
           if(d%2==0)
            z++;
       }
       {
           if(e%2==0)
            z++;
       }
       printf("%d valor(es) par(es)\n",z);

    }
    {
        {
        if(a%2!=0)
        x++;
        }
        {
            if(b%2!=0)
            x++;
            }
        {
            if(c%2!=0)
            x++;
            }
        {
            if(d%2!=0)
            x++;
            }
        {
            if(e%2!=0)
            x++;
            }

        printf("%d valor(es) impar(es)\n",x);
    }
   {
       {
           if(a>0)
            y++;
       }
       {
           if(b>0)
            y++;
       }
       {
           if(c>0)
            y++;
       }
       {
           if(d>0)
            y++;
       }
       {
           if(e>0)
            y++;
       }
       printf("%d valor(es) positivo(s)\n",y);
   }
   {
       {
           if(a<0)
            w++;
       }
       {
           if(b<0)
            w++;
       }
       {
           if(c<0)
            w++;
       }
       {
           if(d<0)
            w++;
       }
       {
           if(e<0)
            w++;
       }
       printf("%d valor(es) negativo(s)\n", w);
   }

   return 0;

}
