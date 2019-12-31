#include<bits/stdc++.h>
using namespace std;

/*
unsigned long long int catalan(int n)
{

    if (n <= 1)
        return 1;


    unsigned long long int res = 0;
    for (int i=0; i<n; i++)
        res += catalan(i)*catalan(n-i-1);

    return res;
}

*/
int main()
{
   /*int n,a;
    freopen("output.txt", "w", stdout);

    for (int i=1; i<30; i++){
            printf("x[%d]=",i)
        cout<<catalan(i)<<endl;
    }
*/unsigned long long int a,x[20];
    int n,i;
    x[1]=1;
    x[2]=2;
    x[3]=5;
    x[4]=14;
    x[5]=42;
    x[6]=132;
    x[7]=429;
    x[8]=1430;
    x[9]=4862;
    x[10]=16796;
    x[11]=58786;
    x[12]=208012;
    x[13]=742900;
    x[14]=2674440;
    x[15]=9694845;
    x[16]=35357670;
    x[17]=129644790;
    x[18]=477638700;
    x[19]=1767263190;

    while(cin>>a){
        for(i=1;i<=19;i++){
            if(x[i]==a){
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
