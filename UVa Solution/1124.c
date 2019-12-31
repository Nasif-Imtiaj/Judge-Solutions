#include<stdio.h>
int main()
{
    char x[100000];
    while(gets(x)!=NULL){
    printf("%s\n",x);
    }
    return 0;
}
