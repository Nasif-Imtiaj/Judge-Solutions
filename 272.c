#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    char x[1000];

    while(gets(x)!=NULL){
     a=strlen(x);
     if(x[a-1]=='"' && x[a-2]=='!'){
            break;
        }
        for(b=0;b<a;b++){
        if(x[b]=='"'){
            x[b]='''';
        }
        }
}


printf("%s",x);

return 0;

}
