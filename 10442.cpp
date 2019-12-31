#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt", "w", stdout);
    int letters[40],i,j,len,a,no=0,base=0,note=0;
    string s,b;
    cin>>a;
    getchar();
    while(a--)
    {
        cin>>s;
        fill(letters,letters+35,0);
        no=0,base=0,note=0;
        len=s.length();
        for(i=0; i<len; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                letters[s[i]-97]++;
            }
            if(s[i]=='#' && note==0)
                note=i;
            if(note==0)
            {
                base*=10;
                base+=s[i]-48;
            }
        }
        // cout<<base<<endl;
        for(i=6; i<30; i++)
        {
            if(letters[i]>0)
                no++;
        }
        if(no!=0)
            printf("no\n");
        else if(base==0 && len==1)
            cout<<"yes"<<endl;
        else
        {
            if(base>=2 && base<=16)
            {
                for(i=note+1; i<len-1; i++)
                {
                    if(s[i]=='#')
                    {
                        // cout<<"hi";
                        if(s[i+1]=='#')
                            i++;
                        else
                        {
                            printf("no\n");
                            no++;
                            break;
                        }
                    }
                }
                if(no==0)
                    printf("yes\n");


            }
            else
            {
                printf("no\n");
            }
        }
    }
    return 0;
}
