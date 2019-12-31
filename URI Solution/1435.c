#include<stdio.h>
int main()
{
    int a,b,c,i,j;
   while(scanf("%d",&a)!=EOF){
  int x[100][100];
    for(i=0;i<100;i++){
       for(j=0;j<100;j++){
        x[i][j]=1,1;
       }
        }


    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            printf("\t%d",x[i][j]);
        }
        printf("\n");
    }



if(a==0){
    break;
}

}

return 0;
}
