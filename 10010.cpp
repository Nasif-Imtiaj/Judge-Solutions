#include<bits/stdc++.h>
using namespace std;
vector<string>grid;
vector<string>words;
vector<pair <int,int> > ans;
vector<pair <int,int> > check;
#define p printf("check\n");
void check_pattern(int a,int b,string s,int top,int right)
{
    int i,j,len,z=0,c,d;
    string word;
    len=s.length();
    for(i=b; i<right; i++) ///for right side
    {

        word+=grid[a][i];
        z++;
        if(z==len)
            break;
    }

    if(s.compare(word)==0)
    {
        check.push_back(make_pair(a,b));
    }
    z=0;
    word.clear();
    c=b;
    while(c>-1) ///for left side
    {
        word+=grid[a][c];
        c--;
        z++;
        if(z==len)
            break;
    }
    if(s.compare(word)==0)
    {
        check.push_back(make_pair(a,b));
    }
    z=0;
    word.clear();

    for(i=a; i<top; i++) ///for top to bottom
    {
        word+=grid[i][b];
        z++;
        if(z==len)
            break;
    }
    if(s.compare(word)==0)
    {
        check.push_back(make_pair(a,b));
    }
    z=0;
    word.clear();
    c=a;
    while(c>-1)
    {
        word+=grid[c][b]; ///for bottom to top
        c--;
        z++;
        if(z==len)
            break;
    }
    if(s.compare(word)==0)
    {
        check.push_back(make_pair(a,b));
    }
    z=0;
    word.clear();

    c=a;
    d=b;

    while(c<top && d<right)  ///bottom right dia
    {
        word+=grid[c][d];
        c++;
        d++;
        z++;
        if(z==len)
            break;
    }
    if(s.compare(word)==0)
    {
        check.push_back(make_pair(a,b));
    }
    z=0;
    word.clear();
    c=a;
    d=b;

    while(c>-1 && d<right)  ///top right dia
    {
        word+=grid[c][d];
        c--;
        d++;
        z++;
        if(z==len)
            break;
    }
    if(s.compare(word)==0)
    {
        check.push_back(make_pair(a,b));
    }
    z=0;
    word.clear();
    c=a;
    d=b;

    while(c>-1 && d>-1)  ///top left dia
    {
        word+=grid[c][d];
        c--;
        d--;
        z++;
        if(z==len)
            break;
    }
    if(s.compare(word)==0)
    {
        check.push_back(make_pair(a,b));
    }
    z=0;
    word.clear();
    c=a;
    d=b;

    while(c<top && d>-1)  ///bottom left dia
    {
        word+=grid[c][d];
        c++;
        d--;
        z++;
        if(z==len)
            break;
    }
    if(s.compare(word)==0)
    {
        check.push_back(make_pair(a,b));
    }
    z=0;
    word.clear();
}
int main()
{
    //freopen("output.txt", "w", stdout);
    int a,b,c,i,j,k,z,x,y,d;
    string s;

    cin>>d;
    while(d--){
    cin>>a>>b;
    getchar();
    for(i=0; i<a; i++)
    {
        cin>>s;
        transform(s.begin(), s.end(),s.begin(), ::tolower);
        grid.push_back(s);
    }
    cin>>c;
    getchar();
    for(i=0; i<c; i++)
    {
        cin>>s;
        transform(s.begin(), s.end(),s.begin(), ::tolower);
        words.push_back(s);
    }
    for(k=0; k<c; k++)
    {
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                if(grid[i][j]==words[k][0])
                {
                    check_pattern(i,j,words[k],a,b);
                    //p;
                }
            }

        }
        sort(check.begin(),check.end());
        x=check[0].first+1;
        y=check[0].second+1;
        ans.push_back(make_pair(x,y));
        check.clear();
    }
    for(i=0; i<c; i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    if(d>0)
    printf("\n");
    ans.clear();
    check.clear();
    grid.clear();
    words.clear();
    }
    return 0;
}
