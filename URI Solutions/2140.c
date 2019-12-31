#include<stdio.h>
int main()
{
     int a,b,c,d,e=0;
    while(d=0,scanf("%d %d",&a,&b)){
       if(a==0 && b==0){
        break;
       }
     d=b-a;
     if(d>=2 && d<=187){
     {d/=100;
     d%=100;
     e++;}
     {d/=50;
     d%=50;
     e++;}
     {d/=20;
     d%=20;
     e++;}
     {d/=10;
     d%=10;
     e++;}
     {d/=5;
     d%=5;
     e++;}
     {d/=2;
     d%=2;
     e++;}

    if(e>2){
            printf("possible\n");
     }
     else if(e==1){
            printf("impossible\n");
     }
     }
    else {

    printf("impossible\n");
    }


    }
return 0;


}
