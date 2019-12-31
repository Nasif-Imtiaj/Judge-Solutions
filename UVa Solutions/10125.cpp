#include<bits/stdc++.h>
using namespace std;
long long int binarysearch(long long int x[],int low,int high,long long int a)
{
    while(low<=high)
    {
        // cout<<"endless"<<endl;
        int mid=(high+low)/2;
        if(x[mid]==a)
            return mid;
        if(x[mid]<a)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main()
{
   // freopen("output.txt", "w", stdout);
   long long int a,b,i,j,k,start,y[1005],mark=0,sum,ans,note=1;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        mark=0;
        note=1;
        for(i=0; i<a; i++)
        {
            cin>>y[i];
        }
        sort(y,y+a);
        for(i=0; i<a; i++)
        {
            for(j=i+1; j<a; j++)
            {
                for(k=j+1; k<a; k++)
                {
                    sum=y[i]+y[j]+y[k];
                    // cout<<sum<<endl;
                    b=binarysearch(y,0,a-1,sum);
                    if(b!=i && b!=j && b!=k && b!=-1)
                    {
                        mark=1;
                        if(note>0)
                        {
                            ans=sum;
                            note--;
                        }
                        if(sum>ans)
                            ans=sum;
                    }

                }
            }
        }
        if(mark==1)
            cout<<ans<<endl;
        else
            cout<<"no solution"<<endl;
    }
    return 0;
}
