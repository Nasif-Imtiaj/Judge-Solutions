#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,x[1000],y,w=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&x[i]);
        if(y>x[i]){
            y=x[i];
            w=i+1;

        }
        }
printf("%d\n",w);
return 0;
}
