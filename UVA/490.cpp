#include<bits/stdc++.h>
using namespace std;

struct box
{

    string s;

} hi[105];

int main()
{
    int highest=0,pos=0,i,j;


    //freopen("output.txt", "w", stdout);
    string x;

    while(getline(cin,x))
    {
        hi[pos].s=x;
        int a=x.length();
        if(a>highest)
            highest=a;
        pos++;
        if(pos==11)
            break;
    }
    for(i=0; i<highest-1; i++)
    {
        for(j=pos-1; j>=0; j--)
        {
            if(hi[j].s.length()>i)
                cout<<hi[j].s[i];
            else
                printf(" ");
        }
        cout<<endl;
    }

    return 0;
}

