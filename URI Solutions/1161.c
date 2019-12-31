#include<stdio.h>
int main()
{
    long long int x,z,y,i,m,n,b,c;
    while(scanf("%lld %lld", &x,&y)!=EOF){
   b=1,c=1;
    if(x>0){
    for(i=1;i<=x;i++){
        b=b*i;
        m=b;
        }
        }
    else if(x==0){
        m=1;}

   if(y>0)
   {for(i=1;i<=y;i++){
      c=c*i;
        n=c;
        }
   }
   else if(y==0){
            n=1;
        }

   z=m+n;
   printf("%lld\n",z);
   }


        return 0;

}
