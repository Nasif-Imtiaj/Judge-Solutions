#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d", &a);
    for(b=0;b<a;b++){
        scanf("%d", &c);{
        if(c>2014){
            d=c-2014;
            printf("%d A.C.\n",d);
            }
        else{
                d=2015-c;
            printf("%d D.C.\n",d);
            }
        }
    }
}
