#include<bits/stdc++.h>
using namespace std;
void space(int a)
{
    if(a<10)
        printf("    %d",a);
    else if(a<100)
        printf("   %d",a);
    else if(a<1000)
        printf("  %d",a);
    else if(a<10000)
        printf(" %d",a);
    else if(a<100000)
        printf("%d",a);
}
long long int div(int a)
{
    if(a==1)
        return 0;
   long long int i,z=1,b;
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0)
        {
            z+=i;
            b=a/i;
            if(b!=i)
                z+=b;
        }
    }
return z;
}
int main()
{
    int x[105],pos=0,a,b,i;
    while(cin>>a)
    {
        if(a==0)
            break;
        x[pos]=a;
        pos++;
    }
    printf("PERFECTION OUTPUT\n");
    for(i=0; i<pos; i++)
    {
        b=div(x[i]);
        space(x[i]);
        if(b==x[i])
            printf("  PERFECT\n");
        else if(b<x[i])
            printf("  DEFICIENT\n");
        else
            printf("  ABUNDANT\n");
    }
    printf("END OF OUTPUT\n");
    return 0;
}
