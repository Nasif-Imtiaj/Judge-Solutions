#include<bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("output.txt", "w", stdout);
    int x[]={2,3,5,7,11,13,17,31,37,71,73,79,97,113,131,199,311,337,373,733,919,991};
    int a,b,i,cnt=0,limit=1;
    while(cin>>a)
    {
        if(a==0)
            break;
        if(a>991)
        {
            cout<<"0"<<endl;
        }
        else
        {
            b=a;
            while(b>0){
                cnt++;
                b/=10;
            }
            while(cnt--){
                limit*=10;
            }
            for(i=0; i<sizeof(x); i++)
            {
                if(x[i]>a && x[i]<limit)
                {
                    cout<<x[i]<<endl;
                    break;
                }
                if(x[i]>limit)
                {
                    cout<<"0"<<endl;
                    break;
                }
            }
        }
        cnt=0;
        limit=1;
    }
return 0;
}
