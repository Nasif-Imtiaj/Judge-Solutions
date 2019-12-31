#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0,c=0,d,t=0,z=0,w=0,y=0,x=0,l=0,g,e,f,i;
    int m,n,o,p,q,u=0;
    char r[10000];
    while(scanf("%s",r)!=EOF)
    {
        a=strlen(r);
        for(i=0; i<a; i++)
        {
            f=r[i]-'0';
            u=f+x;
            m=(u/400);
            x=(u%400)*10;

            u=0;

            u=f+y;
            n=(u/4)+y;
            y=(u%4)*10;

            u=0;

            u=f+w;
            o=(u/100)+w;
            w=(u%100)*10;

            u=0;

            u=f+z;
            p=(u/15)+z;
            z=(u%15)*10;

            u=0;

            u=f+l;
            q=(u/55)+l;
            l=(u%55)*10;
        }
        if(t>0)
        {
            printf("\n");
        }
        if(x==0)
        {
            printf("This is leap year.\n");
            c=1;
        }
        else if(y==0 && w>0)
        {
            printf("This is leap year.\n");
            c=1;
        }
        if(z==0)
        {
            printf("This is huluculu festival year.\n");
            b=1;
        }
        if(l==0 && c==1)
        {
            printf("This is bulukulu festival year.\n");
            b=1;
        }
        if(b==0 && c==0)
        {
            printf("This is an ordinary year.\n");
        }
        b=0;
        c=0;
        t++;
        z=0;
        w=0;
        y=0;
        x=0;
        l=0;
        u=0;
    }
    return 0;
}
