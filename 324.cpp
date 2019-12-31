#include<bits/stdc++.h>
using namespace std;
int freq[10];
struct box
{
    string s;
} hi[500];
void space(int a)
{

    if(a<10)
        printf("    %d",a);
   else if(a<100)
        printf("   %d",a);
   else if(a<1000)
        printf("  %d",a);
}
string mul(string s,int a)
{
    int len,i,carry=0,b,c,d;
    string ans;
    len=s.length();
    for(i=len-1; i>=0; i--)
    {
        b=s[i]-48;
        c=b*a+carry;
        carry=0;
        if(c>9)
        {
            carry=c/10;
            c%=10;
        }
        ans+=c+48;
    }
    if(carry!=0)
        ans+=carry+48;
    reverse(ans.begin(),ans.end());
    return ans;
}
string add(string s,string s1)
{
    int len1,len2,x=0,y=0,carry=0,z=0;
    string ans;
    len1=s.length();
    len2=s1.length();
    len1--;
    len2--;
    while(1)
    {
        if(len1>-1)
        {
            x=s[len1]-48;
            len1--;
        }
        if(len2>-1)
        {
            y=s1[len2]-48;
            len2--;
        }
        z=x+y+carry;
        carry=0;
        if(z>9)
        {
            carry=z/10;
            z%=10;
        }
        ans+=z+48;
        z=0;
        x=0;
        y=0;
        if(len1==-1 && len2==-1)
        {
            break;
        }
    }
    if(carry!=0)
        ans+=carry+48;
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    //freopen("output.txt", "w", stdout);
    int i,j,z=0,a,b,digi=0,keep=1,len,AZ;
    string s,x,y,temp,old;
    s="1";
    hi[1].s=s;
    for(i=2; i<=366; i++)
    {
        if(i<10)
        {
            x=hi[i-1].s;
            y=mul(x,i);
            hi[i].s=y;
        }
        else
        {
            a=i;
            while(a>0)
            {
                a/=10;
                digi++;
            }
            a=i;
            x=hi[i-1].s;
            while(digi>0)
            {
                y=mul(x,a%10);
                a/=10;
                if(keep!=1)
                {
                   for(j=0;j<AZ;j++)
                        y+='0';
                    temp=add(old,y);
                    y=temp;
                }
                keep--;
                old=y;
                digi--;
                AZ++;
            }
            hi[i].s=temp;
        }
        keep=1;
        AZ=0;
    }
    while(cin>>a)
    {
        if(a==0)
            break;
        fill(freq,freq+10,0);
        len=hi[a].s.length();
        s=hi[a].s;
        for(i=0; i<len; i++)
        {
            freq[s[i]-48]++;
        }
        printf("%d! --\n",a);
        printf("   (0)");
        space(freq[0]);
        for(i=1; i<5; i++)
        {
            printf("    (%d)",i);
            space(freq[i]);

        }
        printf("\n");
        printf("   (5)");
        space(freq[5]);
        for(i=6; i<10; i++)
        {
            printf("    (%d)",i);
            space(freq[i]);
        }
        printf("\n");
    }
    return 0;
}
