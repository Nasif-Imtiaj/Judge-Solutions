#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int main()
{
    //freopen("output.txt", "w", stdout);
    long long int a,b,c,i,row,clm,start,finish,flg=0,ans;
    double x,y,z;
    while(cin>>x)
    {
        if(x==0)
            break;
        ans=x;
        y=sqrt(x);
        y=ceil(y);
        a=y;
        if(a%2!=0)
        {
            flg=0;
            row=a;
            clm=0;
            for(i=a*a; i>a*a-a; i--)
            {
                clm++;
                if(i==ans)
                {
                    flg=1;
                    break;
                }
            }
            if(flg==1)
                cout<<clm<<" "<<row<<endl;
            else
            {
                b=a;
                c=a;
                b--;
                c*=c;
                c-=a;
                // cout<<c<<endl;
                // cout<<b*b<<endl;
                for(i=c; i>b*b; i--)
                {
                    row--;
                    if(i==ans)
                    {
                        break;
                    }
                }
                cout<<clm<<" "<<row<<endl;
            }
        }
        else
        {
            flg=0;
            row=0;
            clm=a;
            for(i=a*a; i>a*a-a; i--)
            {
                row++;
                if(i==ans)
                {
                    flg=1;
                    break;
                }
            }
            if(flg==1)
                cout<<clm<<" "<<row<<endl;
            else
            {
                b=a;
                c=a;
                b--;
                c*=c;
                c-=a;
                // cout<<c<<endl;
                //cout<<b*b<<endl;
                for(i=c; i>b*b; i--)
                {
                    clm--;
                    if(i==ans)
                    {
                        break;
                    }
                }
                cout<<clm<<" "<<row<<endl;
            }
        }
    }
    return 0;
}
