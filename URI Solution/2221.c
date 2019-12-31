#include<stdio.h>
int main()
{

    int a,b,c,x,y,z,o,q,p,w,i;
    scanf("%d",&o);
for(i=0;i<o;i++){
    scanf("%d",&w);
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&x,&y,&z);

    if(c%2==0){
        p=(a+b)/2+w;
    }
    else{
        p=(a+b)/2;
    }
    if(z%2==0){
        q=(x+y)/2+w;
    }
    else{
        q=(x+y)/2;
    }
    if(p>q){
        printf("Dabriel\n");
    }
   else  if(q>p){
        printf("Guarte\n");
    }
   else if(q==p){
        printf("Empate\n");
    }

}

return 0;




}
