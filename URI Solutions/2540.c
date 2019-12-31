#include<stdio.h>
int main()
{
    int a,b,c,y=0,i,j,k,m=0,n=0;
    double z=0;
    int x[100000];
    while(z=0,scanf("%d",&a)!=EOF){
    for(n=0,m=0,i=0;i<a;i++){
        scanf("%d",&x[i]);

        if(x[i]==0){
            m++;
        }
        else if(x[i]==1){
            n++;
        }


    }
    z=(double)n/(double)a;
    if(n>=m && z>=(double)2/3){
        printf("impeachment\n");
    }
    else{
        printf("acusacao arquivada\n");
    }
    }
return 0;

}

