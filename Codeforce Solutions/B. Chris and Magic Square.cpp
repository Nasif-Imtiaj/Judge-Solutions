#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,d,x[505][505],y[10000],z=0,t=0,i,j,l=0,k[5],g=0;
    long long int row=0,coloumn=0,dia=0,dia1=0;
    int m,n,o,p;
    set<long long int>s;
    set<long long int>::iterator it;
    cin>>a;
    if(a==1)
    {
        int n;
        cin>>n;
        if(n==0)
            cout<<"1"<<endl;
        else
        {
            cout<<"-1"<<endl;
        }
    }
    else
    {
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
                coloumn+=x[j][i];

                if(i==j)
                {
                    dia+=x[i][j];
                }
                if(i+j==(a-1))
                {
                    dia1+=x[i][j];
                }
                if(x[i][j]==0)
                {
                    m=i;
                    n=j;
                }
            }
            s.insert(row);
            s.insert(coloumn);
            row=0;
            coloumn=0;
        }
        s.insert(dia);
        s.insert(dia1);
        if(s.size()==2)
        {
            it=s.begin();
            o=*it;
            advance(it,1);
            p=*it;
            t=abs(p-o);
            cout<<t<<endl;
            cout<<o<<endl;
            cout<<p<<endl;
            x[m][n]=t;
            s.clear();
            row=0;
            coloumn=0;
            dia1=0;
            dia=0;
            for(i=0; i<a; i++)
            {
                for(j=0; j<a; j++)
                {
                    row+=x[i][j];
                    coloumn+=x[j][i];

                    if(i==j)
                    {
                        dia+=x[i][j];
                    }
                    if(i+j==(a-1))
                    {
                        dia1+=x[i][j];
                    }
                    if(x[i][j]==0)
                    {
                        m=i;
                        n=j;
                    }
                }
                s.insert(row);
                s.insert(coloumn);
                row=0;
                coloumn=0;
            }
            s.insert(dia);
            s.insert(dia1);
            if(s.size()==1)
            {
                cout<<t<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
