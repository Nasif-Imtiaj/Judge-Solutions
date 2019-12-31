#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,j,k,mark=0,mark2=0,mark3=0,mark4=0;
    string s,pali,rev,mirpali,mir;
    while(cin>>s)
    {
        pali=s;
        reverse(pali.begin(),pali.end());
        if(s.compare(pali)==0)
        {
            mark++;
        }
        len=s.length();
        mir=s;
        for(i=0; i<len; i++)
        {
            if(mir[i]=='A'){
                mir[i]='A';
                mark3++;
            }
           else if(mir[i]=='E')
            {
                mir[i]='3';
                mark3++;
            }
            else if(mir[i]=='H')
             {
                 mir[i]='H';
                 mark3++;
             }else if(mir[i]=='I')
             {
                 mir[i]='I';
                 mark3++;
             }
            else if(mir[i]=='J')
            {
                mir[i]='L';
                mark3++;
            }
            else if(mir[i]=='L')
            {
                mir[i]='J';
                mark3++;
            }
            else if(mir[i]=='M')
             {
                 mir[i]='M';
                 mark3++;
             }
             else if(mir[i]=='O')
             {
                 mir[i]='O';
                 mark3++;
             }
            else if(mir[i]=='S')
            {
                mir[i]='2';
                mark3++;
            }
            else if(mir[i]=='T')
             {
                 mir[i]='T';
                 mark3++;
             }
             else if(mir[i]=='U')
             {
                 mir[i]='U';
                 mark3++;
             }
             else if(mir[i]=='V')
             {
                 mir[i]='V';
                 mark3++;
             }
             else if(mir[i]=='W')
             {
                 mir[i]='W';
                 mark3++;
             }
             else if(mir[i]=='X')
             {
                 mir[i]='X';
                 mark3++;
             }
             else if(mir[i]=='Y')
             {
                 mir[i]='Y';
                 mark3++;
             }
            else if(mir[i]=='Z')
            {
                mir[i]='5';
                mark3++;
            }
            else if(mir[i]=='1')
             {
                 mir[i]='1';
                 mark3++;
             }
            else if(mir[i]=='2')
            {
                mir[i]='S';
                mark3++;
            }
            else if(mir[i]=='3')
            {
                mir[i]='E';
                mark3++;
            }
            else if(mir[i]=='5')
            {
                mir[i]='Z';
                mark3++;
            }
            else if(mir[i]=='8')
             {
                 mir[i]='8';
                 mark3++;
             }
            else if(mir[i]=='0')
            {
                mir[i]='O';
                mark3++;
            }
        }
       if(mark3==len){
        reverse(mir.begin(),mir.end());
        if(s.compare(mir)==0)
        {
            mark2=1;
        }
       }
        if(mark==1 && mark2==1)
        {
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        }
        else if(mark==1)
        {
            cout<<s<<" -- is a regular palindrome."<<endl;
        }
        else if(mark2==1)
        {
            cout<<s<<" -- is a mirrored string."<<endl;
        }
        else
        {
            cout<<s<<" -- is not a palindrome."<<endl;
        }
        cout<<endl;
        mark=0;
        mark2=0;
        mark3=0;
    }
    return 0;
}
