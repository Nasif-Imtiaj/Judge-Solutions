#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,z=0,x[30],y[30],track=0,i,start_of_sub,sub_track=0,total_track=0,j;
    fill(x,x+30,0);
    fill(y,y+30,0);
    string s,s1,s2;

    cin>>a>>s;

    int len=s.length();

    if(len%a==0)
    {
        start_of_sub=len/a;
        for(i=0; i<len; i++)
        {
            y[s[i]-97]++;
        }
        for(i=0; i<30; i++)
        {
            if(y[i]!=0){
            x[i]=y[i]/a;

            if(x[i]==0){
                x[i]=1;
            }
            }
        }
        while(1)
        {
            for(i=0; i<30; i++)
            {
                if(y[i]>0)
                {
                    for(j=0;j<x[i];j++){
                        s1+=i+97;
                    }
                    y[i]=y[i]-x[i];
                }
                if(y[i]<=0)
                {
                    track++;
                }
            }
            if(track==30)
            {
                break;
            }
            track=0;
        }
        for(i=0; i<start_of_sub; i++)
        {
            s2+=s1[i];
        }
        for(i=0; i<len; i=i+start_of_sub)
        {
            for(j=0; j<start_of_sub; j++)
            {
                if(s1[i+j]==s2[j])
                {
                    sub_track++;
                }
            }
            if(sub_track==start_of_sub)
            {
                total_track++;
            }
            else
            {
                break;
            }
            sub_track=0;
        }
        if(a==total_track)
        {
            cout<<s1<<endl;
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
    return 0;
}
