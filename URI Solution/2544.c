#include<stdio.h>
int main()
{
    int a,b,c,x=0;

    while(x=0,scanf("%d",&a)!=EOF){
        while(a>0){
        c=a/2;
        if(c>=1){
            x++;
        }
        a/=2;

    }
    printf("%d\n",x);
    }
        return 0;

}
