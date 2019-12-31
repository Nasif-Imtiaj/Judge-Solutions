#include<bits/stdc++.h>
using namespace std;
struct box
{
    string s;
} d[200],hbd[20];
int main()
{
    hbd[0].s="Happy";
    hbd[1].s="birthday";
    hbd[2].s="to";
    hbd[3].s="you";
    hbd[4].s="Happy";
    hbd[5].s="birthday";
    hbd[6].s="to";
    hbd[7].s="you";
    hbd[8].s="Happy";
    hbd[9].s="birthday";
    hbd[10].s="to";
    hbd[11].s="Rujia";
    hbd[12].s="Happy";
    hbd[13].s="birthday";
    hbd[14].s="to";
    hbd[15].s="you";
    int a,b,c,z=0,k=0,i=0,j=0;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>d[i].s;
    }
    i=0;
    j=0;
    while(1)
    {
        cout<<d[i].s<<": "<<hbd[j].s<<endl;
        if(i==a-1)
        {
            z=1;
        }
        if(z==1 && j==15)
        {
            break;
        }
        i++;
        j++;
        if(i==a)
        {
            i=0;
        }
        if(j>15)
        {
            j=0;
        }
    }
    return 0;
}
