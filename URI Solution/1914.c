#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d",&d);
    for(i=0;i<d;i++){
    char x[100],y[100],m[100],n[100];
    scanf("%s %s %s %s",x,y,m,n);
    scanf("%d %d",&a,&b);
    c=a+b;
    if((strcmp(y,"PAR")==0) && c%2==0){
        printf("%s\n",x);
    }
    else if((strcmp(y,"IMPAR")==0) && c%2!=0){
            printf("%s\n",x);
            }
    else{
        printf("%s\n",m);
    }
    }
return 0;
}
