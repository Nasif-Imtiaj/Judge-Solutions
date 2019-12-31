#include<stdio.h>
int main()
{
    int a,b,d,i,e,z=0;

    scanf("%d %d",&a,&b);
    int c[b];
    for(i=0;i<b;i++){
        scanf("%d", &c[i]);{
           e=abs(c[i]-c[i-1]);
           if(e<=a){
            z++;
           }
}
}
        if(z==b-1){

                printf("YOU WIN\n");
            }
            else{
                printf("GAME OVER\n");
            }
    return 0;


}
