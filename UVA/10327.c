#include<stdio.h>
int main()
{
   int a,b,c,d,e,w=0,x[10000];
   while(scanf("%d",&a)!=EOF){
   for(b=0;b<a;b++)
    {
        scanf("%d",&x[b]);
    }
    for(b=0;b<a;b++)
    {
        while(1)
        {
            c=0;
            for(d=0;d<a-1;d++)
            {
                if(x[d]>x[d+1])
                {
                    e=x[d];
                    x[d]=x[d+1];
                    x[d+1]=e;
                    c=1;
                    w++;
                }


            }
            if(c==0){
                break;
            }

        }
    }
printf("Minimum exchange operations : %d\n",w);
w=0;
   }
return 0;
}
