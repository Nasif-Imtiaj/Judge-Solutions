#include <stdio.h>
#include<string.h>
int main()
{
    double x[12][12];
    int i,j;
    char w[100];

    double a,b=1,c,d;
     scanf("%s",w);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&x[i][j]);
        }
    }

    for(i=0;i<12;i++){

        for(j=0;j<12-b;j++){
            c+=x[i][j];
            }
        b++;
        }
    if(strcmp(w,"S")==0){
    printf("%.1lf\n",c);
    }
    else if(strcmp(w,"M")==0){
            c=c/66;
     printf("%.1lf\n",c);

    }




return 0;


}

