#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
    int a,b,c,x[100000],y[100000],mark=0,i,j,k=1;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        for(i=0; i<a; i++)
        {
            cin>>x[i];
        }
        for(i=0; i<b; i++)
        {
            cin>>y[i];
        }
        sort(x,x+a);
        printf("CASE# %d:\n",k);
        for(i=0; i<b; i++)
        {
            mark=0;
            for(j=0; j<a; j++)
            {
                if(y[i]==x[j])
                {
                    printf("%d found at %d\n",y[i],j+1);
                    mark=1;
                    break;
                }
            }
            if(mark==0)
            {
                printf("%d not found\n",y[i]);
            }
        }
        k++;
    }




    return 0;
}
