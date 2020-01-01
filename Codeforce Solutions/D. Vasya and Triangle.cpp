#include<bits/stdc++.h>
using namespace std;
long long int p,q,mark=0;
double A;
double area(long long int x1,long long int y1,long long int x2,long long int y2,long long int x3,long long int y3)
{
    return abs(((double)x1*((double)y2-(double)y3)+(double)x2*((double)y3-(double)y1)+(double)x3*((double)y1-(double)y2))/2.0);
}
long long int div(long long int num,long long int a,long long int b)
{

    int i,j,k;
    double x;

    for(i=1; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            k=num/i;
            if(i<=a && k<=b)
            {
                p=i;
                q=k;
                x=area(0,0,p,0,0,q);
                if(A==x)
                {
                    printf("YES\n");
                    printf("0 0\n");
                    printf("%I64d 0\n",p);
                    printf("0 %I64d\n",q);
                    mark=1;
                    break;
                }
            }
            else if(i<=b && k<=a)
            {
                p=k;
                q=i;
                x=area(0,0,p,0,0,q);
                if(A==x)
                {
                    printf("YES\n");
                    printf("0 0\n");
                    printf("%I64d 0\n",p);
                    printf("0 %I64d\n",q);
                    mark=1;
                    break;
                }
            }
        }
    }
    return -1;
}

int main()
{
    long long int a,b,c,d,e,L;
    double x,H;
    cin>>a>>b>>c;
    H=(double)a*(double)b/(double)c;
    A=(double)a*(double)b/(double)c;
   // cout<<A<<endl;
    L=H*2;
    H=ceil(L);
    div(H,a,b);
    if(mark==0)
    printf("NO\n");
    return 0;
}
