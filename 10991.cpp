#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define sd(q) scanf("%d",&q);
#define sl(q) scanf("%ld",&q);
#define sll(q) scanf("%lld",&q);
#define co(q)  cout<<q<<endl;
#define ci(q)  cin>>q;
#define pb push_back(q);
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
int main()
{
//freopen("output.txt", "w", stdout);
    int a;
    double r1,r2,r3,s1,s2,s3,area_triangle,alpha,beta,gama,shaded_region;
    double a1,a2,a3;
    cin>>a;
    while(a--){
    cin>>r1>>r2>>r3;
    s1=r2+r3;
    s2=r1+r3;
    s3=r1+r2;
    area_triangle=.25*sqrt((s1+s2+s3)*(s1+s2-s3)*(s1+s3-s2)*(s2+s3-s1));

    alpha=acos((s2*s2+s3*s3-s1*s1)/(2*s2*s3));

    beta=acos((s1*s1+s3*s3-s2*s2)/(2*s1*s3));


    gama=acos((s1*s1+s2*s2-s3*s3)/(2*s1*s2));


    a1=(alpha/2)*(r1*r1);
    a2=(beta/2)*(r2*r2);
    a3=(gama/2)*(r3*r3);
    shaded_region=area_triangle-a1-a2-a3;
    printf("%.6lf\n",shaded_region);

    }
    return 0;
}
