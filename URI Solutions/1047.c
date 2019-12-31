#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;

    scanf("%d %d %d %d", &a,&c, &b, &d);

if(b>a && c>d){
            x=b-a-1;
            y=(60+d)-c;
    }
if(b>a && c<d){
        x=b-a;
        y=d-c;
    }
if(b>a && c==d){
        x=b-a;
        y=0;
    }
if (a>b && c>d){
    x=(24+b)-a-1;
    y=(60+d)-c;
  }
if(a>b && c<d){
    x=(24+b)-a;
    y=d-c;
  }
if(a>b && c==d){
    x=(24-a)+b;
    y=0;
  }
if(a==0 && b>0 && c>d){
    x=(b-1);
    y=(60+d-c);
  }
if(a==0 && b>0 && c<d) {
    x=b;
    y=d-c;
  }
if(a==0 && b>0 && c==d) {
    x=b;
    y=0;
  }
if(b==0 && a>0 && c>d){
    x=(24-a)+b-1;
    y=(60+d)-c;
  }
if(b==0 && a>0 && d>c) {
    x=(24-a)+b;
    y=d-c;
  }
if(a==b && c==d){
    x=24;
    y=0;
  }
if(a==b && c>d){
    x=24-1;
   y=(60+d)-c;
   }
if(a==b && d>c){
   x=0;
   y=d-c;
 }
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x,y);
    return 0;
}


