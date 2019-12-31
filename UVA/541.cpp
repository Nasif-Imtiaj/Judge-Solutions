#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,b,c,d,z=0,w=0,m,n,i,j,x[110][110],row=0,col=0,mark=0,mark2=0;

    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        for(i=0; i<a; i++)
        {
            for(j=0; j<a; j++)
            {
                cin>>x[i][j];
            }
        }
        for(i=0; i<a; i++)
        {
            for(j=0; j<a; j++)
            {
                row+=x[i][j];
                col+=x[j][i];
            }
            if(row%2!=0)
            {
                mark++;
                m=i;
            }
            if(col%2!=0)
            {
                mark2++;
                n=i;
            }
            row=0;
            col=0;
            if(mark>1 || mark2>1)
            {
                cout<<"Corrupt"<<endl;
                break;
            }
        }
        if(mark==1 && mark2==1)
        {
            if(x[m][n]==0)
            {
                x[m][n]=1;
            }
            else
            {
                x[m][n]=0;
            }
            for(i=0; i<a; i++)
            {
                for(j=0; j<a; j++)
                {
                    row+=x[i][j];
                    col+=x[j][i];
                }
                if(row%2!=0)
                {
                    w++;
                    cout<<"Corrupt"<<endl;
                    break;
                }
                if(col%2!=0)
                {
                    w++;
                    cout<<"Corrupt"<<endl;
                    break;
                }
                row=0;
                col=0;
            }
            if(w==0)
            {
                cout<<"Change bit ("<<m+1<<","<<n+1<<")"<<endl;
            }
        }
        else if(mark==0 && mark2==0)
        {
            cout<<"OK"<<endl;
        }
        mark=0;
        mark2=0;
        row=0;
        col=0;
        z=0;
        w=0;
        m=-1;
        n=-1;
    }
    return  0;
}
