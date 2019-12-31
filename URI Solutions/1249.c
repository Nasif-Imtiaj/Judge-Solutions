#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i=0;
    char x[1000];
   while(gets(x) != NULL){
        a=strlen(x);
   for(i=0;i<a;i++){

        if(x[i]>=97 && x[i]<=109 || x[i]>=65 && x[i]<=77)
        {
           x[i]=x[i]+13;
        }
    else if(x[i]>77 && x[i]<=90|| x[i]>109 && x[i]<=122)
        {
            x[i]=x[i]-13;
        }
         else{
            x[i]=x[i];
         }

   }
   printf("%s\n",x);
   }
    return 0;

}
