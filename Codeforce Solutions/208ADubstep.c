#include<stdio.h>
#include<string.h>
int main()
{

    int a,b,c,i,j=0,k=0;
    char x[100000],z[10000];
    scanf("%s",x);
    a=strlen(x);
    for(i=0; i<a; i++)
    {
        if(x[i]=='W' && x[i+1]=='U' && x[i+2]=='B')
        {
            k=1;
            continue;
        }
        else if(x[i-1]=='W' && x[i]=='U' && x[i+1]=='B')
        {
            k=1;
            continue;
        }
        else if(x[i-2]=='W' && x[i-1]=='U' && x[i]=='B')
        {
            k=1;
            continue;
        }
        else
        {
        if(z[0]>=65 && z[0]<=90 || z[0]>=97 && z[0]<=122){
            if(k==1){
                z[j]=' ';
                k=0;
                j++;
            }
          }

          z[j]=x[i];
           j++;

        }
    }




    printf("%s\n",z);


    return 0;
}
