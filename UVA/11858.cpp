#include<bits/stdc++.h>
using namespace std;
int arr[1000002],lef[1000002],righ[1000002];
long long int cnt;
void MS(int low,int high)
{
    if(low==high)
        return;
    int mid=(low+high)/2;
    MS(low,mid);
    MS(mid+1,high);
    int i,pos1=0,pos2=0;
    pos1=mid-low+1;
    pos2=high-mid;
    for(i=0; i<pos1; i++)
        lef[i]=arr[i+low];
    for(i=0; i<pos2; i++)
        righ[i]=arr[i+mid+1];
    int j,k;
    i=0,j=0,k=low;
    while(i<pos1 && j<pos2)
    {
        if(lef[i]<=righ[j])
        {
            arr[k]=lef[i];
            i++;
        }
        else
        {
            arr[k]=righ[j];
            j++;
            cnt+=pos1-i;
        }
        k++;
    }

    while(i<pos1)
    {
        arr[k]=lef[i];
        i++;
        k++;
    }
    while(j<pos2)
    {
        arr[k]=righ[j];
        j++;
        k++;
    }
}
int main()
{
   //freopen("output.txt", "w", stdout);
    int a,i;
    while(scanf("%d",&a)!=EOF){
    for(i=0; i<a; i++)
    {
       scanf("%d",&arr[i]);
    }
    MS(0,a-1);
   printf("%lld\n",cnt);
    cnt=0;
    }
    return 0;
}
