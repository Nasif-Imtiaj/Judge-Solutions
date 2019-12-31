#include<stdio.h>
int main()
{
  char g[4],h[3],j[3],i[4],k[3],l[3];
    int a,b,c,d,m,n,o,p,x,y,w,z;
    scanf("%s %d", &g,&m);
    scanf("%d %s %d %s %d", &a,&h,&c,&j,&o);
    scanf("%s %d", &i,&n);
    scanf("%d %s %d %s %d", &b,&k,&d,&l,&p);

 x=((24*m)*60*60)+((a*60)*60)+(c*60)+o;
 y=((24*n)*60*60)+((b*60)*60)+(d*60)+p;
 z=y-x;

printf("%d dia(s)\n",z/(24*60*60));
z%=24*60*60;
printf("%d hora(s)\n",z/(60*60));
z%=60*60;
printf("%d minuto(s)\n",z/60);
z%=60;
printf("%d segundo(s)\n",z);

  return 0;
}
