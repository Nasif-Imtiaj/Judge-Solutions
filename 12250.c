#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
  int i=1;
    while(gets(c)!=NULL){
        if(strcmp(c,"HELLO")==0){
            printf("Case %d: ENGLISH\n",i);
        }
       else if(strcmp(c,"HOLA")==0){
            printf("Case %d: SPANISH\n",i);
        }
       else if(strcmp(c,"HALLO")==0){
            printf("Case %d: GERMAN\n",i);
        }
       else if(strcmp(c,"BONJOUR")==0){
            printf("Case %d: FRENCH\n",i);
        }
       else if(strcmp(c,"CIAO")==0){
            printf("Case %d: ITALIAN\n",i);
        }
       else if(strcmp(c,"ZDRAVSTVUJTE")==0){
            printf("Case %d: RUSSIAN\n",i);
        }
       else if(strcmp(c,"#")==0){
           break;
        }
        else{
            printf("Case %d: UNKNOWN\n",i);
        }
i++;
}
 return 0;
}
