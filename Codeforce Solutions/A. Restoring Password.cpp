#include<bits/stdc++.h>
using namespace std;

struct box
{

    string s;

} d[15];


int main()
{
    int i,j,k;

    string in,temp,ans;

    cin>>in;

    for(i=0; i<10; i++)
    {
        cin>>d[i].s;
    }
    for(i=0; i<80; i=i+10)
    {

        for(j=0; j<10; j++)
        {
            temp+=in[i+j];
        }
        for(k=0; k<10; k++)
        {
            if(temp.compare(d[k].s)==0)
            {
                ans+=k+48;
                break;
            }
        }
        temp.clear();
    }
    cout<<ans<<endl;
    return 0;
}
