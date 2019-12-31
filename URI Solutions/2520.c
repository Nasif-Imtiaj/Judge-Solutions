#include<stdio.h>
int main()
{
    int a[100][100],i,j,p=0,q=0,m=0,n=0,x,y,z,b,c;

   while(scanf("%d %d",&b,&c)!=EOF){

    for(i=0;i<b;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<b;i++){
        for(j=0;j<c;j++){
            if(a[i][j]==1){
                p=i;
                q=j;
            }
            if(a[i][j]==2){
                m=i;
                n=j;
            }

        }

    }

  x=abs(m-p);
  y=abs(n-q);
  z=x+y;
  printf("%d\n",z);

   }



return 0;
}
