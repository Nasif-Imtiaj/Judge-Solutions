#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,i,w=0;;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==0 && b==0)
        {
            break;
        }
        for(i=a;i<=b;i++)
        {
            c=sqrt(i);
            if(c*c==i){
                w++;
            }
        }
        printf("%d\n",w);
      w=0;
}
return 0;
}
