#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b=0,c=0,d,f=0,e=0,i=0,p=0,q=0,t,s=1,r,k,j,l;
    char x[1000],y,z[1000],w,g[1000];
    scanf("%lld",&l);
    while(l--)
    {
        scanf("%lld",&a);
        while(1)
        {
            char x[1000],y,z[1000],w;
            e=a;
            while(a>0)
            {
                b=a%10;
                a/=10;
                c=(c*10)+b;
                b=0;
            }
            d=e+c;
            f=d;
            while(d>0)
            {
                r=d%10;
                d/=10;
                y=r+'0';
                x[i]=y;
                i++;
            }
            x[i]='\0';
            strcpy(z,x);
            p=strlen(z);

            for(k=p-1,j=0; j<k; j++,k--)
            {
                w=z[k];
                z[k]=z[j];
                z[j]=w;
            }
            for(j=0; j<p; j++)
            {
                if(x[j]==z[j])
                {
                    q++;
                }
            }
            if(p==q)
            {
                printf("%d ",s);
                printf("%s\n",x);
                break;
            }
            s++;
            i=0;
            q=0;
            p=0;
            b=0;
            c=0;
            e=0;
            a=f;
        }
        s=1;
        i=0;
        q=0;
        p=0;
        b=0;
        c=0;
        e=0;
    }
    return 0;
}
