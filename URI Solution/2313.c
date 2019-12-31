#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,y,z,temp;;
   double x;
    scanf("%d %d %d",&a,&b,&c);

    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    if(b<c){
        temp=b;
        b=c;
        c=temp;
    }
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
d=b+c;
  if(d>a){
   if(a==b && b==c && a==c){
        printf("Valido-Equilatero\n");
    }
   else  if(a==c || c==b || a==b)
    {

        printf("Valido-Isoceles\n");
    }
    else{
        printf("Valido-Escaleno\n");
    }
    x=sqrt(pow(b,2)+pow(c,2));
    if(x==a){
        printf("Retangulo: S\n");
    }
    else {
        printf("Retangulo: N\n");
    }

}

else{
    printf("Invalido\n");
}


return 0;



}
