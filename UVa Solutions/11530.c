#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,d,i,j,z=0;
    int x[10000];
    memset(x,0,1000);
    x[' ']=1;
    x['a']=1;
    x['d']=1;
    x['g']=1;
    x['j']=1;
    x['m']=1;
    x['p']=1;
    x['t']=1;
    x['w']=1;
    x['b']=2;
    x['e']=2;
    x['h']=2;
    x['k']=2;
    x['n']=2;
    x['q']=2;
    x['u']=2;
    x['x']=2;
    x['c']=3;
    x['f']=3;
    x['i']=3;
    x['l']=3;
    x['o']=3;
    x['r']=3;
    x['v']=3;
    x['y']=3;
    x['s']=4;
    x['z']=4;
    char y[1000],c;
    scanf("%d",&b);
    getchar();
    for(j=1; j<=b; j++)
    {
        gets(y);
        a=strlen(y);
        for(i=0; i<a; i++)
        {
            z+=x[y[i]];
        }
        printf("Case #%d: %d\n",j,z);
        z=0;
    }
    return 0;
}
