#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,c=0;
    int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,i;
    for(i=0; i<3; i++)
    {
        while(a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,gets(x)!=EOF)
        {
            if(strcmp(x,"---")==0)
            {
                p8++;
            }
            a8+=p8;
            if(strcmp(x,"--*")==0)
            {
                p1++;
            }
            a1+=p1;
            if(strcmp(x,"-*-")==0)
            {
                p2++;

            }
            a2+=p2;
            if(strcmp(x,"-**")==0)
            {
                p3++;

            }
            a3+=p3;
            if(strcmp(x,"*--")==0)
            {
                p4++;

            }
            a4+=p4;
            if(strcmp(x,"*-*")==0)
            {
                p5++;

            }
            a5+=p5;
            if(strcmp(x,"**-")==0)
            {
                p6++;

            }
            a6+=p6;
            if(strcmp(x,"***")==0)
            {
                p7++;

            }
            a7+=p7;

            if(strcmp(x,"caw caw")==0)
            {
                break;

            }
            c=a1*1+a2*2+a3*3+a4*4+a5*5+a6*6+a7*7+a8*0;
        }
        printf("%d\n",c);
        p1=0;
        p2=0;
        p3=0;
        p4=0;
        p5=0;
        p6=0;
        p7=0;
        p8=0;
        c=0;
    }

    return 0;

}
