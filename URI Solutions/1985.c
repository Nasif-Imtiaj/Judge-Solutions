#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    double e,g=0;
    scanf("%d", &a);
    for(i=0;i<a;i++){
        scanf("%d %d",&c,&d);{
            if(c==1001){
                e=1.50*d;

            }else if(c==1002){
                e=2.50*d;

            }else if(c==1003){
                e=3.50*d;

            }else if(c==1004){
                e=4.50*d;

            }else if(c==1005){
                e=5.50*d;

            }
            g+=e;
            }
}
printf("%.2lf\n",g);

return 0;

}
