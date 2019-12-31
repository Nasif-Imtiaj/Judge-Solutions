#include<stdio.h>
int main()
{
    int a,i,m=0,n=0,z=0,g;

   double j,k,l,t,y,u,o,p;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
         char x[3];
         int b;
        scanf("%d %s",&b,&x);
        {

        if(x[0]=='C')
        {
            m+=b;}
        else if(x[0]=='R'){
            n+=b;
        }
        else if(x[0]=='S'){
            z+=b;
        }
        }
        }

        g=m+n+z;
        t=g;
        u=m;
        o=n;
        p=z;
        j=(u/t)*100;
        k=(o/t)*100;
        l=(p/t)*100;
        printf("Total: %d cobaias\n",g);
        printf("Total de coelhos: %d\n",m);
        printf("Total de ratos: %d\n",n);
        printf("Total de sapos: %d\n",z);
        printf("Percentual de coelhos: %0.2lf %%\n",j);
        printf("Percentual de ratos: %0.2lf %%\n",k);
        printf("Percentual de sapos: %0.2lf %%\n",l);

        return 0;
}
