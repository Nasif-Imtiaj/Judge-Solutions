#include<stdio.h>
int main()
{

    int a,b,c,d,i;
    double x[10],y,z=0,w=0,p=0,m,n;
   char r[100000];
   scanf("%d",&b);
   for(d=0;d<b;d++){

    scanf("%s",r);
    scanf("%lf",&m);
    for(i=0;i<7;i++){
        scanf("%lf",&x[i]);
        }
   while(1){
w=0;
    for(i=0;i<6;i++){
        if(x[i]<x[i+1]){
            y=x[i];
            x[i]=x[i+1];
            x[i+1]=y;
            w=1;}
        }

  if(w==0){
    break;
}
   }
   for(z=0,p=0,i=0;i<7;i++){
        z+=x[i];
        p=z-x[0]-x[6];

    }
   n=m*p;
   printf("%s %.2lf\n",r,n);

   }
    return 0;







    }





