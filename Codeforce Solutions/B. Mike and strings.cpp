#include<bits/stdc++.h>
using namespace std;

struct box
{
    string s;
} d[60],e[60];

int main()
{
    int a,i,z=0,highest_count=0,min_1=0,len,minimal,track=0,least_needed=1000000,not_possible=0;
    int x=0,k;
    map<string,int> my;

    string h,sample;

    char replace_1;

    cin>>a;

    for(i=0; i<a; i++)
    {
        cin>>d[i].s;
        h=d[i].s;
        my[h]++;
        len=h.length();
    }

    map<string,int>::iterator it;
    minimal=len;
    for(it=my.begin(); it!=my.end(); ++it)
    {
        e[x].s=it->first;
        x++;
    }
    for(k=0; k<x; k++)
    {
        sample=e[k].s;

        for(i=0; i<a; i++)
        {
            h=d[i].s;
            if(h.compare(sample)==0)
            {
                z++;
                continue;
            }
            else
            {
                while(minimal--)
                {
                    track++;

                    h+=h[0];
                    h.erase(h.begin()+0);
                    if(h.compare(sample)==0)
                    {
                        z++;
                        break;
                    }
                }
            }
            minimal=len;
        }
        if(z!=a)
        {
            not_possible=1;
            break;
        }
        if(track<least_needed)
        {
            least_needed=track;
        }
        track=0;
        minimal=len;
        z=0;
    }
    if(not_possible==0)
    {
        cout<<least_needed<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }

    return 0;
}
