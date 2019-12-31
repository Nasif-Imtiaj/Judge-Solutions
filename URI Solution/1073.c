#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,z;
    scanf("%d", &a);
    for(i=1; i<=a;i++)
    if(i%2==0){
        z=pow(i,2);
        printf("%d^2 = %d\n",i,z);
    }
    return 0;
}
