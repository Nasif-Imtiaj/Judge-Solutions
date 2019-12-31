#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,temp;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<b){
     temp = a;
     a = b;
     b = temp;
     }
    if(b<c){
    temp = b;
    b = c;
    c = temp;
    }
    if(c<d){
        temp =c;
        c=d;
        d=temp;
    }
    if(b<c){
        temp=b;
        b=c;
        c=temp;
    }
    if(a<c){
        temp = a;
        a=c;
        c=temp;
    }
    if(a<b){
    temp = a;
    a = b;
    b = temp;
    }
e=b+c;
f=c+d;
if(e>a || f>b){
printf("S\n");
}
else{
    printf("N\n");
}
return 0;
}
