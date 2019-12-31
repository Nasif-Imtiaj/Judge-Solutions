#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b,c;

    char d[1000000];
    scanf("%[^\n]s",d);

    for(c=0;d[c]!='\0';++c){
        a++;
    }

    if(a>=1 && a<=80){

        printf("YES\n");
    }
    else{
        printf("NO\n");
    }






}
