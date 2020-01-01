#include<stdio.h>
#include<string.h>
int main()
{
    char x[100000];
    scanf("%s",x);
    if(x[0]>90){
        x[0]=x[0]-32;
    }
printf("%s\n",x);
return 0;
}
