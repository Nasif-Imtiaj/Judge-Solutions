#include<bits/stdc++.h>
using namespace std;
int x[10000];
int ans[1000],pos=0;
int find_pc(int up,int down,int pc[],int total,int high)
{
    int track=0;
    while(track<total)
    {
        if(up<=high)
        {
            ans[pos]=pc[up];
            pos++;
            up++;
            track++;
        }
        if(track>=total)
            break;

        if(down>-1)
        {
            ans[pos]=pc[down];
            pos++;
            down--;
            track++;
        }
        if(down==-1 && up>high)
            break;
    }

    return 0;
}
int main()
{
    int a,b,c,i,j,l=0,k=0,y[10000],PC[1000],track=0;
    int center1,center2,up,down,total,high;
    for(i=2; i<=10000; i++)
    {
        if(x[i]==0)
            for(j=i+i; j<=10000; j+=i)
            {
                x[j]=1;
            }
    }
    for(i=1; i<=10000; i++)
    {
        if(x[i]==0)
        {
            y[l]=i;
            l++;
        }
    }
    while(cin>>a>>b)
    {
        for(i=0; i<=a; i++)
        {
            if(y[i]<=a)
            {
                PC[k]=y[i];
                high=i;
                k++;
            }
            else
                break;
        }
        if(k%2==0)
        {
            k--;
            total=2*b;
            center1=k/2;
            center2=k/2;
            center2+=1;
            up=center2;
            down=center1;
            pos=0;
            fill(ans,ans+1000,0);
            find_pc(up,down,PC,total,high);
        }
        else
        {
            k--;
            total=2*b;
            total--;
            center1=k/2;
            up=center1;
            down=center1-1;
            pos=0;
            fill(ans,ans+1000,0);
            find_pc(up,down,PC,total,high);
        }
        sort(ans,ans+pos);
        printf("%d %d:",a,b);
        for(i=0; i<pos; i++)
            printf(" %d",ans[i]);
        k=0;
        printf("\n\n");
    }
    return 0;
}
