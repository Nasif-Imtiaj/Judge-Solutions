#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,x[1000],y[1000],z=0,w=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%d",&x[j]);

        }
        for(w=0,z=0,j=0;j<9;j++){
             if(x[j]>=x[j+1]){
                z++;
             }
             if(x[j]<=x[j+1]){
                w++;
             }
        }
        if(i==0){
            printf("Lumberjacks:\n");
        }
        if(z==9 || w==9)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
    }
    return 0;
}
