#include<stdio.h>
int main()
{
  char c[20],d[20],e[20];

  gets(c);
  getchar;
  gets(d);
  getchar;
  gets(e);
  getchar;

  if(strcmp(c,"vertebrado")==0){
        if(strcmp(d,"ave")==0){
            if(strcmp(e,"carnivoro")==0){
                printf("aguia\n");
            }
        else if(strcmp(e,"onivoro")==0){
            printf("pomba\n");
        }
        }
    else if(strcmp(d,"mamifero")==0){
        if(strcmp(e,"onivoro")==0){
            printf("homem\n");
        }
        else if(strcmp(e,"herbivoro")==0){
            printf("vaca\n");
        }
    }
  }
  else if(strcmp(c,"invertebrado")==0){
    if(strcmp(d,"inseto")==0){
        if(strcmp(e,"hematofago")==0){
            printf("pulga\n");
        }
        else if(strcmp(e,"herbivoro")==0){
            printf("lagarta\n");
        }
    }
   else if(strcmp(d,"anelideo")==0){
    if(strcmp(e,"hematofago")==0){
        printf("sanguessuga\n");
    }
    else if(strcmp(e,"onivoro")==0){
        printf("minhoca\n");
    }
   }
  }

return 0;


}
