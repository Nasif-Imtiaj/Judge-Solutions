#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j,k;
    char c[26];
   while(scanf("%s",c)!=EOF){
    scanf("%d",&b);
    for(i=0;i<b;i++){
    scanf("%d",&a);
    a=a-1;
    printf("%c",c[a]);
    }
    printf("\n");
   }


return 0;

}

