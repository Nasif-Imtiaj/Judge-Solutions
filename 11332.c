#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,z=0,w=0;
    while(scanf("%lld",&a)!=EOF){
            if(a==0){
                break;
            }
    while(1){
    while(a>0){
        b=a%10;
        a/=10;
        z+=b;
        w++;
    }
    if(w==1)
        {
            break;
        }
    a=z;
        z=0;
        w=0;
    }
printf("%lld\n",z);
z=0;
w=0;
    }
return 0;
}
