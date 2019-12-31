#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d", &a);
    for(i=0;i<5;i++){
        scanf("%d",&b);
        if(a==b){
                c++;
        }
    }
    printf("%d\n",c);
}
