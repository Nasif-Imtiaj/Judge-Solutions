#include<stdio.h>
#include<string.h>
int main()
{
    int a,q=0,r=0,s=0,t=0,i;
    int h=0,e=0,l=0,l1=0,o=0;
    int b,c,d,g,f;
    char x[1000];
    scanf("%s",x);
    a=strlen(x);
    for(i=0; i<a; i++)
    {
        if(h==0 && x[i]=='h'){
          b=i;
          h=1;
        }
        if(h==1 && x[i]=='e')
        {
            c=i;
            e=1;
        }
        if(l==1 && x[i]=='l'){
            g=i;
            l1=1;
        }
        if(e==1 && x[i]=='l'){
            d=i;
            l=1;
        }

        if(l1==1 && x[i]=='o'){
            f=i;
        }
    }
    printf("%d %d %d %d %d",b,c,d,g,f);
    if(b<c && c<d && d<g && g<f)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
