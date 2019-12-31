#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x[1000],i,j=1;
    cin>>b;
    while(b--)
    {
        cin>>a;
        for(i=0; i<a; i++)
            cin>>x[i];
        sort(x,x+a);
        printf("Case %d: ",j);
        cout<<x[a/2]<<endl;
        j++;
    }
    return 0;
}
