#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("output.txt", "w", stdout);
    int a,b,c,len,len1,i,j,x[50],y[50],win=0,ans=0,lose=0,notchicken=0;
    string s,s1;
    while(cin>>j)
    {
        getchar();
        if(j==-1)
            break;
        cin>>s>>s1;
        len=s.length();
        len1=s1.length();
        fill(x,x+40,0);
        win=0,ans=0,lose=0,notchicken=0;
        for(i=0; i<len; i++)
        {
            x[s[i]-97]++;
        }
        for(i=0; i<30; i++)
        {
            if(x[i]>0)
                ans++;
        }
        for(i=0; i<len1; i++)
        {
            a=s1[i]-97;
            if(x[a]>0 && x[a]!=100 && x[a]!=200)
            {
                win++;
                x[a]=100;
            }
            else if(x[a]!=200 && x[a]!=100){
                lose++;
                x[a]=200;
            }
            if(win==ans)
            {
                notchicken++;
                printf("Round %d\n",j);
                printf("You win.\n");
                break;
            }
            if(lose==7)
            {
                notchicken++;
                printf("Round %d\n",j);
                printf("You lose.\n");
                break;
            }
        }
        //cout<<lose<<endl;
        if(notchicken==0)
        {
            printf("Round %d\n",j);
            printf("You chickened out.\n");
        }
    }
    return 0;
}
