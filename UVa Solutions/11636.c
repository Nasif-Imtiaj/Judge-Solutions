#include<stdio.h>
int main()
{
    int a,b=1,c=0,d,i=1,e;
    while(scanf("%d",&a)!=EOF){
            if(a<0){
                break;
            }
    while(1){
        if(b>=a){
            break;
        }
        b+=b;
        c++;
    }
    printf("Case %d: %d\n",i,c);
    i++;
        c=0;
        b=1;
    }
    return 0;
}
