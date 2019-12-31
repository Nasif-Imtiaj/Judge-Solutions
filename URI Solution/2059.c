#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,v;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    f=b+c;

    if((f%2==0 && a==1) || (f%2!=0 && a==0))
    {
        v=1;
    }
    else{
            v=2;
}
        if((d==1 && e==0) || (d==0 && e==1))
        {
            v=1;
        }
        else if(d==1 && e==1)
        {
            v=2;
        }
    printf("Jogador %d ganha!\n",v);


    return 0;
}
