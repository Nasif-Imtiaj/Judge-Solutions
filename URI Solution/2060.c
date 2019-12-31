#include<stdio.h>
int main()
{
    int a,b,i;
    int x=0,y=0,z=0,w=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
    scanf("%d",&b);
    if(b%2==0){
        x++;
    }
    if(b%3==0){
        y++;
    }
    if(b%4==0){
        z++;
    }
    if(b%5==0){
        w++;
    }
}
    printf("%d Multiplo(s) de 2\n",x);
    printf("%d Multiplo(s) de 3\n",y);
    printf("%d Multiplo(s) de 4\n",z);
    printf("%d Multiplo(s) de 5\n",w);

    return 0;



}
