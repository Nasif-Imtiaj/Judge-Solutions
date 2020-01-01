#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i;
    char x[1000];
    scanf("%d",&b);
while(b--){
    scanf("%s",x);
    a=strlen(x);
    if(a<=10){
        printf("%s\n",x);
    }
    else{
        printf("%c%d%c\n",x[0],a-2,x[a-1]);
    }
}

return 0;

}
