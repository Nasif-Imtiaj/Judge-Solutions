#include<bits/stdc++.h>
using namespace std;
struct box
{
    char x,y;
} first[1200],second[20];
int main()
{
    int i,j,save=0,mark=0,start=0,not_equal=0;

    char m,n,p,q;

    string S,S1;

    cin>>S>>S1;

    int lenS=S.length();

    for(i=0; i<lenS; i++)
    {
        m=S[i];
        n=S1[i];
        if(i==0)
        {
            first[start].x=S[i];
            first[start].y=S1[i];
            start++;
        }
        else
        {
            for(j=0; j<start; j++)
            {
                p=first[j].x;
                q=first[j].y;
                if(m==p && n==q || m==q && n==p)
                {
                    save=1;
                    break;
                }
                if(m==p && n!=q || m!=p && n==q || m==q && n!=p || m!=q && n==p)
                {
                    mark=1;
                    break;
                }
            }
        }


        if(save==0 && i!=0){
            first[start].x=m;
            first[start].y=n;
            start++;
        }
            if(mark==1)
            {
                break;
            }
            save=0;
    }
if(mark==1){
    cout<<"-1"<<endl;
}
else{
    for(i=0;i<start;i++)
     {
         if(first[i].x!=first[i].y){
          second[not_equal].x=first[i].x;
          second[not_equal].y=first[i].y;
          not_equal++;
         }
     }
    cout<<not_equal<<endl;
  for(i=0;i<not_equal;i++)
 {
     cout<<second[i].x<<" "<<second[i].y<<endl;
 }
}
    return 0;
}
