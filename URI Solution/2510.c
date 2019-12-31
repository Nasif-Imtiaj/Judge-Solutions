#include<stdio.h>
#include<string.h>
int main()
{
     int a,i,l;
    char c[100];

    scanf("%d",&a);

   for(i=0;i<a;i++){
    scanf("%s",c);
    l=strlen(c);
    if(l>=0 && l<=25){
        printf("Y\n");
    }
    else{
        printf("N\n");
    }

   }
    return 0;






}
