#include<stdio.h>
int main()
{

    int a,b,c,e,f,i,j,m=0,n=0,o=0,p=0,q=0,s=0;
    double u,v,r;
    int x[5],y[5];
    char d[10000];
    scanf("%d",&e);
    for(f=0;f<e;f++){
    scanf("%s",d);
    for(i=0;i<3;i++){
        scanf("%d",&x[i]);
    }
    for(j=0;j<3;j++){
        scanf("%d",&y[j]);
    }

    m+=x[0];
    n+=x[1];
    o+=x[2];
    p+=y[0];
    q+=y[1];
    s+=y[2];
    }



    u=(double)p/(double)m*100;
    v=(double)q/(double)n*100;
    r=(double)s/(double)o*100;


    printf("Pontos de Saque: %.2lf %%.\n",u);
    printf("Pontos de Bloqueio: %.2lf %%.\n",v);
    printf("Pontos de Ataque: %.2lf %%.\n",r);

    return 0;
}
