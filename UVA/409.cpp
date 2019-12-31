#include<bits/stdc++.h>
using namespace std;
#define P printf("check\n");
vector<string>excuse;
vector<string>words_1_line;
struct box
{
    string x;
    int y;
} line[50];
int main()
{
  //  freopen("output.txt", "w", stdout);
    int a,b,i,j,k,l=1,m,len,WL,lame=0,found=0,high=0;
    string s,temp,wordu,wordl;
    while(cin>>a>>b)
    {
        lame=0,found=0,high=0;
        excuse.clear();
        getchar();
        for(i=0; i<a; i++)
        {
            cin>>s;
            excuse.push_back(s);
        }
        getchar();
        for(i=0; i<b; i++)
        {
            getline(cin,s);
            line[i].x=s;
            line[i].y=0;
        }

        for(i=0; i<b; i++)
        {
            s=line[i].x;
            lame=0;
            words_1_line.clear();
            len=s.length();
            for(j=0; j<=len; j++)
            {
                if(!(s[j]>='A' && s[j]<='Z') && !(s[j]>='a' && s[j]<='z') && s[j]!='-')
                {

                    words_1_line.push_back(temp);
                    temp.clear();
                    continue;
                }
                temp+=s[j];
            }
            for(j=0; j<a; j++)
            {
                wordl=excuse[j];
                transform(wordu.begin(), wordu.end(),wordu.begin(), ::toupper);
                for(k=0; k<words_1_line.size(); k++)
                {
                    transform(words_1_line[k].begin(), words_1_line[k].end(),words_1_line[k].begin(), ::tolower);
                    if(words_1_line[k].compare(wordl)==0)
                        lame++;

                }
            }
            line[i].y=lame;
            if(lame>high)
                high=lame;
        }
        // cout<<high<<endl;
        printf("Excuse Set #%d\n",l);
        for(i=0; i<b; i++)
        {
            if(line[i].y==high)
                cout<<line[i].x<<endl;
        }
        printf("\n");
        l++;
    }
    return 0;
}
