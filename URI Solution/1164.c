#include<stdio.h>
int main()
{
    int a,b,c,d,e=0;
scanf("%d", &c);

for(d=1;d<=c;d++){

    scanf("%d", &a);
    for(e=0,b=1;b<a;b++){

            if(a%b==0){
                     e+=b;
      }
    }
    if(a==e){
    printf("%d eh perfeito\n",a);
}
else{
    printf("%d nao eh perfeito\n",a);
}
}


    return 0;


}
