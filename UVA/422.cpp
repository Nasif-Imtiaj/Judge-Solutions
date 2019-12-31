#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
vector<string>mat;
vector<string>words;
int x,y,m,n;
int check_pattern(int l,int r,string letter,int a)
{
    int c,d,i,j,z=0,len;
    len=letter.length();
    string temp;
    for(i=r; i<a; i++) ///left to right
    {
        temp+=mat[l][i];
        z++;
        if(z==len)
            break;
    }
    if(temp.compare(letter)==0)
    {
        len--;
        x=l+1;
        y=r+1;
        m=l+1;
        n=r+1+len;
        return 1;
    }
    c=r;
    z=0;
    temp.clear();
    for(i=r;i>=0;i--){          ///right to left
      temp+=mat[l][i];
      z++;
      if(z==len)
        break;
    }
    if(temp.compare(letter)==0)
    {
        len--;
        x=l+1;
        y=r+1;
        m=l+1;
        n=r+1-len;
        return 1;
    }
    c=l;
    z=0;
    temp.clear();
    for(i=l; i<a; i++) /// top to bottom
    {
        temp+=mat[i][r];
        z++;
        if(z==len)
            break;
    }
    if(temp.compare(letter)==0)
    {
        x=l+1;
        y=r+1;
        m=l+len;
        n=r+1;
        return 1;
    }
    c=l;
    z=0;
    temp.clear();
    while(c--)      ///bottom to top
    {
        temp+=mat[c][r];
        z++;
        if(z==len)
            break;

        c--;
        if(c<0)
            break;
    }
    if(temp.compare(letter)==0)
    {
        x=l+1;
        y=r+1;
        m=c+1;
        n=r+1;
        return 1;
    }
    c=l;
    d=r;
    z=0;
    temp.clear();

    while(c>-1 && d<a)                  ///top right
    {
        temp+=mat[c][d];
        z++;
        if(z==len)
            break;
        c--;
        d++;
    }
    if(temp.compare(letter)==0)
    {
        x=l+1;
        y=r+1;
        m=c+1;
        n=d+1;
        return 1;
    }
    c=l;
    d=r;
    z=0;
    temp.clear();

    while(c>-1 && d>-1)                   /// top left
    {
        temp+=mat[c][d];
        z++;
        if(z==len)
            break;
        c--;
        d--;
    }
    if(temp.compare(letter)==0)
    {
        x=l+1;
        y=r+1;
        m=c+1;
        n=d+1;
        return 1;
    }
    c=l;
    d=r;
    z=0;
    temp.clear();

    while(c<a && d<a)               /// bottom right
    {
        temp+=mat[c][d];
        z++;
        if(z==len)
            break;
        c++;
        d++;
    }
    if(temp.compare(letter)==0)
    {
        x=l+1;
        y=r+1;
        m=c+1;
        n=d+1;
        return 1;
    }
    c=l;
    d=r;
    z=0;
    temp.clear();
    while(c<a && d>-1)                 ///bottom left
    {
        temp+=mat[c][d];
        z++;
        if(z==len)
            break;
        c++;
        d--;
    }
    if(temp.compare(letter)==0)
    {
        x=l+1;
        y=r+1;
        m=c+1;
        n=d+1;
        return 1;
    }
    c=l;
    d=r;
    z=0;
    temp.clear();
    return 0;
}
int main()
{
   //freopen("output.txt", "w", stdout);
    int a,b,c,d=0,i,j,k,found=0,check=0;
    string s;
    cin>>a;
    b=a;
    getchar();
    while(b--)
    {
        cin>>s;
        mat.push_back(s);
    }
    while(cin>>s)
    {
        if(s=="0")
            break;
        words.push_back(s);
    }
    for(k=0; k<words.size(); k++)
    {
        found=0;
        d=0;
        for(i=0; i<a; i++)
        {
            for(j=0; j<a; j++)
            {
                if(mat[i][j]==words[k][0])
                {

                    d=check_pattern(i,j,words[k],a);
                    if(d==1)
                        found=1;
                }
            }
        }
        if(found==1)
            printf("%d,%d %d,%d\n",x,y,m,n);
        else
            printf("Not found\n");
    }
    return 0;
}

