#include<stdio.h>
#include<string.h>
int main()
{

    double x[12][12];
    double sum,mul,avg;
    int i,j,z;
    char w[100];
  scanf("%d",&z);
  scanf("%s",w);
    for(i=0;i<12;i++){
            for(j=0;j<12;j++){
        scanf("%lf",&x[i][j]);
            }
    }


if(strcmp(w,"S")==0){
 for(i=z; i<=z; i++)
    {
        sum = 0;
        for(j=0; j<12; j++)
        {
            sum += x[j][i];
        }

        printf("%lf\n",sum);
    }
}
else if(strcmp(w,"M")==0){

    for(i=z; i<=z; i++)o
    {
        mul = 0;
        for(j=0; j<12; j++)
        {
            mul += x[j][i];
        }
        avg=mul/12;
        printf("%.1lf\n",avg);
    }
}    return 0;
}

